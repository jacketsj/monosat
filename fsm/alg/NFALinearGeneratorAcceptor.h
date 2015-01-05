/*
 * NFAGenerateAccept.h
 *
 *  Created on: Jan 3, 2015
 *      Author: sam
 */

#ifndef NFAGENERATEACCEPT_H_
#define NFAGENERATEACCEPT_H_

#include "../DynamicFSM.h"
#include "mtl/Bitset.h"
#include "mtl/Vec.h"
#include "NFATypes.h"
using namespace Monosat;


template<class Status=FSMNullStatus>
class NFALinearGeneratorAcceptor{
	DynamicFSM & gen;
	DynamicFSM & accept;
	Status & status;
	int gen_last_modification=-1;
	int gen_last_addition=-1;
	int gen_last_deletion=-1;
	int gen_history_qhead=0;
	int gen_last_history_clear=0;

	int accept_last_modification=-1;
	int accept_last_addition=-1;
	int accept_last_deletion=-1;
	int accept_history_qhead=0;
	int accept_last_history_clear=0;


	int stats_full_updates=0;
	int stats_fast_updates=0;
	int stats_fast_failed_updates=0;
	int stats_skip_deletes=0;
	int stats_skipped_updates=0;
	int stats_num_skipable_deletions=0;
	double mod_percentage=0;

	double stats_full_update_time=0;
	double stats_fast_update_time=0;


	vec<int> next;
	vec<int> cur;

	vec<bool> next_seen;
	vec<bool> cur_seen;

	vec<int> gen_cur;
	vec<int> gen_next;
	vec<bool> gen_next_seen;
	vec<bool> gen_cur_seen;
	int accept_source;
	int gen_source;

	vec<int> chars;
	vec<bool> seen_chars;

	struct Check{
		int gen_final;
		int accept_final;
	};

	vec<Check> toCheck;

public:
	NFALinearGeneratorAcceptor(DynamicFSM &  gen,DynamicFSM &  accept,int gen_source, int accept_source,Status & status=fsmNullStatus):gen(gen),accept(accept),status(status),gen_source(gen_source),accept_source(accept_source){
		//Generator must be _linear_ (but may be non-deterministic.)

		vec<int> stack;
		stack.push(gen_source);
		while(stack.size()){
			int n = stack.last();
			stack.pop();
			int to = -1;
			for(int i = 0;i<gen.nIncident(n);i++){
				int t = gen.incident(n,i).node;
				int edgeID = gen.incident(n,i).id;
				if(gen.transitionEnabled(edgeID,-1,-1)){
					if(to!=-1){
						fprintf(stderr,"Error! FSM generator is not linear!");
						exit(1);
						break;
					}
					to = t;
				}
			}
			if(to!=-1){
				stack.push(to);
			}
		}
	}

private:
	bool stepGenerator(int final, vec<int> & store, vec<bool> & store_seen, vec<NFATransition> * path=nullptr){
		DynamicFSM & g = gen;


		for(int i = 0;i<cur.size();i++){
			int s = cur[i];
			for(int j = 0;j<g.nIncident(s);j++){
				//now check if the label is active
				int edgeID= g.incident(s,j).id;
				int to = g.incident(s,j).node;

				if(!cur_seen[to] && g.transitionEnabled(edgeID,0,0)){
					cur_seen[to]=true;
					cur.push(to);
					if(path){
						path->push({edgeID,0,0});
					}
				}
				for(int l = 1;l<g.outAlphabet();l++){
					if (!next_seen[to] && g.transitionEnabled(edgeID,0,l)){
						next_seen[to]=true;
						next.push(to);
						if(!store_seen[l]){
							store_seen[l]=true;
							store.push(l);
						}
						if(path){
							path->push({edgeID,0,l});
						}
					}
				}
			}
		}

		next.swap(cur);
		next_seen.swap(cur_seen);

		for(int s:next){
			assert(next_seen[s]);
			next_seen[s]=false;
		}
		next.clear();

		return cur_seen[final];

	}

	void addCheck(int generatorFinalState, int acceptorFinalState){
		toCheck.push({generatorFinalState,acceptorFinalState});
	}

	void find_accepts(int gen_final, int accept_final){

		for(int s:cur){
			assert(cur_seen);
			cur_seen[s]=false;
		}
		cur.clear();
		assert(next.size()==0);
		cur_seen[accept_source]=true;
		cur.push(accept_source);


		for(int s:gen_cur){
			assert(gen_cur_seen);
			gen_cur_seen[s]=false;
		}
		gen_cur.clear();
		assert(next.size()==0);
		gen_cur_seen[gen_source]=true;
		gen_cur.push(gen_source);
		chars.clear();
		DynamicFSM & g = accept;

		//initial emove pass:
		if(g.emovesEnabled()){
			for(int i = 0;i<cur.size();i++){
				int s = cur[i];
				for(int j = 0;j<g.nIncident(s);j++){
					//now check if the label is active
					int edgeID= g.incident(s,j).id;
					int to = g.incident(s,j).node;
					if(!cur_seen[to] && g.transitionEnabled(edgeID,0,0)){
						cur_seen[to]=true;
						cur.push(to);

					}

				}
			}
		}
		//initial emove pass:
		if(gen.emovesEnabled()){
			for(int i = 0;i<gen_cur.size();i++){
				int s = gen_cur[i];
				for(int j = 0;j<gen.nIncident(s);j++){
					//now check if the label is active
					int edgeID= gen.incident(s,j).id;
					int to = gen.incident(s,j).node;
					if(!gen_cur_seen[to] && gen.transitionEnabled(edgeID,0,0)){
						gen_cur_seen[to]=true;
						gen_cur.push(to);

					}
				}
			}
		}

		bool prev_accepting=gen_cur_seen[gen_final];
		bool accepted=false;
		//use the linear generator to produce a (set) of strings. Because the generator is linear, it is only ever in one state, which greatly simplifies the reasoning here...
		while(!accepted){
			bool accepting = stepGenerator(gen_final, chars,seen_chars);//get set of next strings

			if(chars.size()==0){
				//must eventually happen because the generator is linear.
				break;
			}
			for(int l:chars)
			{
				assert(l>0);
				for(int i = 0;i<cur.size();i++){
					int s = cur[i];
					for(int j = 0;j<g.nIncident(s);j++){
						//now check if the label is active
						int edgeID= g.incident(s,j).id;
						int to = g.incident(s,j).node;
						if(!cur_seen[to] && g.transitionEnabled(edgeID,0,0)){
							cur_seen[to]=true;
							cur.push(to);
							//status.reaches(str,to,edgeID,0);
						}

						if (!next_seen[to] && g.transitionEnabled(edgeID,l,0)){
							//status.reaches(str,to,edgeID,l);
							next_seen[to]=true;
							next.push(to);
						}
					}
				}
			}

			if(prev_accepting && cur_seen[accept_final]){
				accepted=true;
			}

			next.swap(cur);
			next_seen.swap(cur_seen);

			for(int s:next){
				assert(next_seen[s]);
				next_seen[s]=false;
			}
			next.clear();


			for(int l :chars){
				assert(seen_chars[l]);
				seen_chars[l]=false;
			}
			seen_chars.clear();
			prev_accepting = accepting;
		}


	}

	void find_gen_path(int gen_final, int accept_final, vec<NFATransition> & path){
		path.clear();
		for(int s:cur){
			assert(cur_seen);
			cur_seen[s]=false;
		}
		cur.clear();
		assert(next.size()==0);
		cur_seen[accept_source]=true;
		cur.push(accept_source);


		for(int s:gen_cur){
			assert(gen_cur_seen);
			gen_cur_seen[s]=false;
		}
		gen_cur.clear();
		assert(next.size()==0);
		gen_cur_seen[gen_source]=true;
		gen_cur.push(gen_source);
		chars.clear();
		DynamicFSM & g = accept;

		//initial emove pass:
		if(g.emovesEnabled()){
			for(int i = 0;i<cur.size();i++){
				int s = cur[i];
				for(int j = 0;j<g.nIncident(s);j++){
					//now check if the label is active
					int edgeID= g.incident(s,j).id;
					int to = g.incident(s,j).node;
					if(!cur_seen[to] && g.transitionEnabled(edgeID,0,0)){
						cur_seen[to]=true;
						cur.push(to);

					}

				}
			}
		}
		//initial emove pass:
		if(gen.emovesEnabled()){
			for(int i = 0;i<gen_cur.size();i++){
				int s = gen_cur[i];
				for(int j = 0;j<gen.nIncident(s);j++){
					//now check if the label is active
					int edgeID= gen.incident(s,j).id;
					int to = gen.incident(s,j).node;
					if(!gen_cur_seen[to] && gen.transitionEnabled(edgeID,0,0)){
						gen_cur_seen[to]=true;
						gen_cur.push(to);

					}
				}
			}
		}

		bool prev_accepting=gen_cur_seen[gen_final];
		bool accepted=false;
		//use the linear generator to produce a (set) of strings. Because the generator is linear, it is only ever in one state, which greatly simplifies the reasoning here...
		while(!accepted){
			bool accepting = stepGenerator(gen_final, chars,seen_chars,& path);//get set of next strings

			if(chars.size()==0){
				//must eventually happen because the generator is linear.
				break;
			}
			for(int l:chars)
			{
				assert(l>0);
				for(int i = 0;i<cur.size();i++){
					int s = cur[i];
					for(int j = 0;j<g.nIncident(s);j++){
						//now check if the label is active
						int edgeID= g.incident(s,j).id;
						int to = g.incident(s,j).node;
						if(!cur_seen[to] && g.transitionEnabled(edgeID,0,0)){
							cur_seen[to]=true;
							cur.push(to);
							//status.reaches(str,to,edgeID,0);
						}

						if (!next_seen[to] && g.transitionEnabled(edgeID,l,0)){
							//status.reaches(str,to,edgeID,l);
							next_seen[to]=true;
							next.push(to);
						}
					}
				}
			}

			if(prev_accepting && cur_seen[accept_final]){
				accepted=true;
			}

			next.swap(cur);
			next_seen.swap(cur_seen);

			for(int s:next){
				assert(next_seen[s]);
				next_seen[s]=false;
			}
			next.clear();


			for(int l :chars){
				assert(seen_chars[l]);
				seen_chars[l]=false;
			}
			seen_chars.clear();
			prev_accepting = accepting;
		}


	}

public:

	void update(){

		if (gen_last_modification > 0 && gen.modifications == gen_last_modification && accept_last_modification > 0 && accept.modifications == accept_last_modification) {
			stats_skipped_updates++;
			return;
		}
		static int iteration = 0;
		int local_it = ++iteration;
		stats_full_updates++;

		if (gen_last_modification <= 0 || gen.changed() || gen_last_history_clear != gen.historyclears ||
				accept_last_modification <= 0 || accept.changed() || accept_last_history_clear != accept.historyclears) {
			gen_next_seen.clear();
			gen_next_seen.growTo(gen.states());
			gen_cur_seen.clear();
			gen_cur_seen.growTo(gen.states());

			next_seen.clear();
			next_seen.growTo(accept.states());
			cur_seen.clear();
			cur_seen.growTo(accept.states());
		}

		accept_last_modification = accept.modifications;
		accept_last_deletion = accept.deletions;
		accept_last_addition = accept.additions;
		accept_history_qhead = accept.history.size();
		accept_last_history_clear = accept.historyclears;

		gen_last_modification = gen.modifications;
		gen_last_deletion = gen.deletions;
		gen_last_addition = gen.additions;
		gen_history_qhead = gen.history.size();
		gen_last_history_clear = gen.historyclears;
	}




public:

	bool accepts(int genFinal, int acceptFinal){
		find_accepts(genFinal, acceptFinal);
		return cur_seen[acceptFinal];
	}
	void getGeneratorPath(int genFinal, int acceptFinal, vec<NFATransition> & path){
		 find_gen_path(genFinal, acceptFinal,path);
	}



};



#endif /* NFAGENERATEACCEPT_H_ */