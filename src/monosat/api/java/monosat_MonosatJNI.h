/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class monosat_MonosatJNI */

#ifndef _Included_monosat_MonosatJNI
#define _Included_monosat_MonosatJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     monosat_MonosatJNI
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_monosat_MonosatJNI_getVersion
  (JNIEnv *, jclass);

/*
 * Class:     monosat_MonosatJNI
 * Method:    varToLit
 * Signature: (IZ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_varToLit
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     monosat_MonosatJNI
 * Method:    litToVar
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_litToVar
  (JNIEnv *, jclass, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newSolver
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_newSolver__
  (JNIEnv *, jclass);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newSolver
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_newSolver__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     monosat_MonosatJNI
 * Method:    deleteSolver
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_deleteSolver
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setOutputFile
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setOutputFile
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     monosat_MonosatJNI
 * Method:    readGNF
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_readGNF
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     monosat_MonosatJNI
 * Method:    solve
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_solve
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    solveAssumptions
 * Signature: (JLjava/nio/IntBuffer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_solveAssumptions
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setTimeLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setTimeLimit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setMemoryLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setMemoryLimit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setConflictLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setConflictLimit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setPropagationLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setPropagationLimit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    solveLimited
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_solveLimited
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    solveAssumptionsLimited
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_solveAssumptionsLimited
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    lastSolutionWasOptimal
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_lastSolutionWasOptimal
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getConflictClause
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getConflictClause
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    backtrack
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_backtrack
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newVar
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newVar
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    releaseLiteral
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_releaseLiteral
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setDecisionVar
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setDecisionVar
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     monosat_MonosatJNI
 * Method:    isDecisionVar
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_isDecisionVar
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setDecisionPriority
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setDecisionPriority
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getDecisionPriority
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getDecisionPriority
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    setDecisionPolarity
 * Signature: (JIZ)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_setDecisionPolarity
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getDecisionPolarity
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_getDecisionPolarity
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    true_lit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_true_1lit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    disallowLiteralSimplification
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_disallowLiteralSimplification
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    disablePreprocessing
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_disablePreprocessing
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    nVars
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_nVars
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    nClauses
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_nClauses
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    nBitvectors
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_nBitvectors
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    addClause
 * Signature: (JLjava/nio/IntBuffer;I)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_addClause
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    addUnitClause
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_addUnitClause
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    addBinaryClause
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_addBinaryClause
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    addTertiaryClause
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_monosat_MonosatJNI_addTertiaryClause
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    clearOptimizationObjectives
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_clearOptimizationObjectives
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximizeBV
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_maximizeBV
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    minimizeBV
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_minimizeBV
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximizeLits
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_maximizeLits
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    minimizeLits
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_minimizeLits
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximizeWeightedLits
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_maximizeWeightedLits
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    minimizeWeightedLits
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_minimizeWeightedLits
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    initBVTheory
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_initBVTheory
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBitvector_const
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBitvector_1const
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBitvector_anon
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBitvector_1anon
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBitvector
 * Signature: (JJLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBitvector
  (JNIEnv *, jclass, jlong, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_width
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_bv_1width
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_const_lt
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1const_1lt
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_bv_lt
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1bv_1lt
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_const_leq
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1const_1leq
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_bv_leq
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1bv_1leq
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_const_gt
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1const_1gt
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_bv_gt
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1bv_1gt
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_const_geq
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1const_1geq
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_bv_geq
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1bv_1geq
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_const_eq
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1const_1eq
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_bv_eq
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1bv_1eq
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_const_neq
 * Signature: (JJIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1const_1neq
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newBVComparison_bv_neq
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newBVComparison_1bv_1neq
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_bitblast
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1bitblast
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_concat
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1concat
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_slice
 * Signature: (JJIIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1slice
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_not
 * Signature: (JJII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1not
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_and
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1and
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_nand
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1nand
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_or
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1or
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_nor
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1nor
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_xor
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1xor
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_xnor
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1xnor
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_ite
 * Signature: (JJIIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1ite
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_addition
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1addition
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_subtraction
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1subtraction
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_multiply
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1multiply
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_divide
 * Signature: (JJIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1divide
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_min
 * Signature: (JJLjava/nio/IntBuffer;II)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1min
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_max
 * Signature: (JJLjava/nio/IntBuffer;II)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1max
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_popcount
 * Signature: (JJLjava/nio/IntBuffer;II)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1popcount
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    bv_unary
 * Signature: (JJLjava/nio/IntBuffer;II)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_bv_1unary
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    at_most_one
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_at_1most_1one
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    assertPB_lt
 * Signature: (JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_assertPB_1lt
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    assertPB_leq
 * Signature: (JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_assertPB_1leq
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    assertPB_eq
 * Signature: (JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_assertPB_1eq
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    assertPB_geq
 * Signature: (JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_assertPB_1geq
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    assertPB_gt
 * Signature: (JIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_assertPB_1gt
  (JNIEnv *, jclass, jlong, jint, jint, jobject, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    flushPB
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_flushPB
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newGraph
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_newGraph
  (JNIEnv *, jclass, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newNode
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newNode
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newEdge
 * Signature: (JJIIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newEdge
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newEdge_bv
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_newEdge_1bv
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    nNodes
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_nNodes
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    nEdges
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_nEdges
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    reaches
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_reaches
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    shortestPathUnweighted_lt_const
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_shortestPathUnweighted_1lt_1const
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    shortestPathUnweighted_leq_const
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_shortestPathUnweighted_1leq_1const
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    shortestPath_lt_const
 * Signature: (JJIIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_shortestPath_1lt_1const
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    shortestPath_leq_const
 * Signature: (JJIIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_shortestPath_1leq_1const
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    shortestPath_lt_bv
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_shortestPath_1lt_1bv
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    shortestPath_leq_bv
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_shortestPath_1leq_1bv
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximumFlow_geq
 * Signature: (JJIIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_maximumFlow_1geq
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximumFlow_gt
 * Signature: (JJIIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_maximumFlow_1gt
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximumFlow_geq_bv
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_maximumFlow_1geq_1bv
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    maximumFlow_gt_bv
 * Signature: (JJIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_maximumFlow_1gt_1bv
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    minimumSpanningTree_leq
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_minimumSpanningTree_1leq
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    minimumSpanningTree_lt
 * Signature: (JJIIJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_minimumSpanningTree_1lt
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    acyclic_undirected
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_acyclic_1undirected
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    acyclic_directed
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_acyclic_1directed
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    newEdgeSet
 * Signature: (JJLjava/nio/IntBuffer;IZ)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_newEdgeSet
  (JNIEnv *, jclass, jlong, jlong, jobject, jint, jboolean);

/*
 * Class:     monosat_MonosatJNI
 * Method:    graph_setAssignEdgesToWeight
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_graph_1setAssignEdgesToWeight
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     monosat_MonosatJNI
 * Method:    createFlowRouting
 * Signature: (JJIII)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_createFlowRouting
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    addRoutingNet
 * Signature: (JJJIILjava/nio/IntBuffer;Ljava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_addRoutingNet
  (JNIEnv *, jclass, jlong, jlong, jlong, jint, jint, jobject, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_Literal
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getModel_1Literal
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_BV
 * Signature: (JJIZ)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_getModel_1BV
  (JNIEnv *, jclass, jlong, jlong, jint, jboolean);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_MaxFlow
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_getModel_1MaxFlow
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_EdgeFlow
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_getModel_1EdgeFlow
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_AcyclicEdgeFlow
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_getModel_1AcyclicEdgeFlow
  (JNIEnv *, jclass, jlong, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_MinimumSpanningTreeWeight
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_monosat_MonosatJNI_getModel_1MinimumSpanningTreeWeight
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_Path_Nodes_Length
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getModel_1Path_1Nodes_1Length
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_Path_Nodes
 * Signature: (JJIILjava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getModel_1Path_1Nodes
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_Path_EdgeLits_Length
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getModel_1Path_1EdgeLits_1Length
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    getModel_Path_EdgeLits
 * Signature: (JJIILjava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_getModel_1Path_1EdgeLits
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    And_
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_And_1
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Ands_
 * Signature: (JLjava/nio/IntBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Ands_1
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertImpliesAnd_
 * Signature: (JILjava/nio/IntBuffer;II)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertImpliesAnd_1
  (JNIEnv *, jclass, jlong, jint, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Ands
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Ands
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    And
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_And
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Or_
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Or_1
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Ors_
 * Signature: (JLjava/nio/IntBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Ors_1
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    ImpliesAnd
 * Signature: (JLjava/nio/IntBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_ImpliesAnd
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    ImpliesOr
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_ImpliesOr
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    ImpliesOr_
 * Signature: (JLjava/nio/IntBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_ImpliesOr_1
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertImpliesOr_
 * Signature: (JILjava/nio/IntBuffer;II)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertImpliesOr_1
  (JNIEnv *, jclass, jlong, jint, jobject, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Ors
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Ors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Or
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Or
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Nors
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Nors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Nor
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Nor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Nands
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Nands
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Nand
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Nand
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Xors
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Xors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Xor
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Xor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Xnors
 * Signature: (JLjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Xnors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Xnor
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Xnor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Implies
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Implies
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Implies_
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Implies_1
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Ite
 * Signature: (JIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Ite
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Ite_
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Ite_1
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Add
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;ILjava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Add
  (JNIEnv *, jclass, jlong, jobject, jobject, jint, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Add_
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;ILjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Add_1
  (JNIEnv *, jclass, jlong, jobject, jobject, jint, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Subtract
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;ILjava/nio/IntBuffer;)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Subtract
  (JNIEnv *, jclass, jlong, jobject, jobject, jint, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Subtract_
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;ILjava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Subtract_1
  (JNIEnv *, jclass, jlong, jobject, jobject, jint, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Negate
 * Signature: (JLjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_Negate
  (JNIEnv *, jclass, jlong, jobject, jint, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Negate_
 * Signature: (JLjava/nio/IntBuffer;ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_Negate_1
  (JNIEnv *, jclass, jlong, jobject, jint, jobject);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Assert
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_Assert
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertOrTertiary
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertOrTertiary
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertOrs
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertOrs
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertOr
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertOr
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertNands
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertNands
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertNand
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertNand
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertAnds
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertAnds
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertAnd
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertAnd
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertNors
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertNors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertNor
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertNor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertXor
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertXor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertXors
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertXors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertXnors
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertXnors
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertXnor
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertXnor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertImplies
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertImplies
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertEqual
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertEqual
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertAllSame
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertAllSame
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    Equals
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_Equals
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    LEQ
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_LEQ
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    LT
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_monosat_MonosatJNI_LT
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertEquals
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertEquals
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertLEQ
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertLEQ
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertLT
 * Signature: (JLjava/nio/IntBuffer;Ljava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertLT
  (JNIEnv *, jclass, jlong, jobject, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertAMO
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertAMO
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     monosat_MonosatJNI
 * Method:    AssertExactlyOne
 * Signature: (JLjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_monosat_MonosatJNI_AssertExactlyOne
  (JNIEnv *, jclass, jlong, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
