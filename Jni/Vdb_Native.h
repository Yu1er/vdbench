/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Vdb_Native */

#ifndef _Included_Vdb_Native
#define _Included_Vdb_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Vdb_Native
 * Method:    nativeSleep
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_nativeSleep
  (JNIEnv *, jclass, jlong);

/*
 * Class:     Vdb_Native
 * Method:    openfile
 * Signature: (Ljava/lang/String;II)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_openfile
  (JNIEnv *, jclass, jstring, jint, jint);

/*
 * Class:     Vdb_Native
 * Method:    closefile
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_closefile
  (JNIEnv *, jclass, jlong);

/*
 * Class:     Vdb_Native
 * Method:    fsync
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_fsync
  (JNIEnv *, jclass, jlong);

/*
 * Class:     Vdb_Native
 * Method:    directio
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_directio
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     Vdb_Native
 * Method:    getsize
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_getsize
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     Vdb_Native
 * Method:    get_simple_tod
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_get_1simple_1tod
  (JNIEnv *, jclass);

/*
 * Class:     Vdb_Native
 * Method:    read
 * Signature: (JJJJI)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_read
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    write
 * Signature: (JJJJI)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_write
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    noDedupWrite
 * Signature: (JJJJI)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_noDedupWrite
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    store_pattern
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_store_1pattern
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     Vdb_Native
 * Method:    array_to_buffer
 * Signature: ([IJI)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_array_1to_1buffer
  (JNIEnv *, jclass, jintArray, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    buffer_to_array
 * Signature: ([IJI)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_buffer_1to_1array
  (JNIEnv *, jclass, jintArray, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    longBufferToArray
 * Signature: ([JJI)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_longBufferToArray
  (JNIEnv *, jclass, jlongArray, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    arrayToLongBuffer
 * Signature: ([JJI)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_arrayToLongBuffer
  (JNIEnv *, jclass, jlongArray, jlong, jint);

/*
 * Class:     Vdb_Native
 * Method:    allocbuf
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_allocbuf
  (JNIEnv *, jclass, jint);

/*
 * Class:     Vdb_Native
 * Method:    freebuf
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_freebuf
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     Vdb_Native
 * Method:    getKstatPointer
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_getKstatPointer
  (JNIEnv *, jclass, jstring);

/*
 * Class:     Vdb_Native
 * Method:    getKstatData
 * Signature: (LVdb/Kstat_data;J)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_getKstatData
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     Vdb_Native
 * Method:    getCpuData
 * Signature: (LVdb/Kstat_cpu;)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_getCpuData
  (JNIEnv *, jclass, jobject);

/*
 * Class:     Vdb_Native
 * Method:    openKstatGlobal
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_openKstatGlobal
  (JNIEnv *, jclass);

/*
 * Class:     Vdb_Native
 * Method:    closeKstatGlobal
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_closeKstatGlobal
  (JNIEnv *, jclass);

/*
 * Class:     Vdb_Native
 * Method:    setup_jni_context
 * Signature: (ILjava/lang/String;[J[J)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_setup_1jni_1context
  (JNIEnv *, jclass, jint, jstring, jlongArray, jlongArray);

/*
 * Class:     Vdb_Native
 * Method:    get_one_set_statistics
 * Signature: (I[J[J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Vdb_Native_get_1one_1set_1statistics
  (JNIEnv *, jclass, jint, jlongArray, jlongArray);

/*
 * Class:     Vdb_Native
 * Method:    alloc_jni_shared_memory
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_alloc_1jni_1shared_1memory
  (JNIEnv *, jclass, jlong);

/*
 * Class:     Vdb_Native
 * Method:    getSolarisPids
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_getSolarisPids
  (JNIEnv *, jclass);

/*
 * Class:     Vdb_Native
 * Method:    getWindowsErrorText
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Vdb_Native_getWindowsErrorText
  (JNIEnv *, jclass, jint);

/*
 * Class:     Vdb_Native
 * Method:    multiKeyReadAndValidate
 * Signature: (JIJJIJI[I[J[JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_multiKeyReadAndValidate
  (JNIEnv *, jclass, jlong, jint, jlong, jlong, jint, jlong, jint, jintArray, jlongArray, jlongArray, jstring, jint);

/*
 * Class:     Vdb_Native
 * Method:    multiKeyFillAndWrite
 * Signature: (JJIJJIJIJI[I[J[JLjava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_multiKeyFillAndWrite
  (JNIEnv *, jclass, jlong, jlong, jint, jlong, jlong, jint, jlong, jint, jlong, jint, jintArray, jlongArray, jlongArray, jstring, jint);

/*
 * Class:     Vdb_Native
 * Method:    fillLfsrArray
 * Signature: ([IJILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_fillLfsrArray
  (JNIEnv *, jclass, jintArray, jlong, jint, jstring);

/*
 * Class:     Vdb_Native
 * Method:    fillLfsrBuffer
 * Signature: (JIJILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_Vdb_Native_fillLfsrBuffer
  (JNIEnv *, jclass, jlong, jint, jlong, jint, jstring);

/*
 * Class:     Vdb_Native
 * Method:    eraseFileSystemCache
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_Vdb_Native_eraseFileSystemCache
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     Vdb_Native
 * Method:    getErrorText
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Vdb_Native_getErrorText
  (JNIEnv *, jclass, jint);

/*
 * Class:     Vdb_Native
 * Method:    chmod
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_chmod
  (JNIEnv *, jclass, jstring);

/*
 * Class:     Vdb_Native
 * Method:    getTickCount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_getTickCount
  (JNIEnv *, jclass);

/*
 * Class:     Vdb_Native
 * Method:    truncateFile
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_Vdb_Native_truncateFile
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
