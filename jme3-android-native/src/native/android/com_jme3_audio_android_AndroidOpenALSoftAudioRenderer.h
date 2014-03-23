/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_audio_android_AndroidOpenALSoftAudioRenderer */

#ifndef _Included_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
#define _Included_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: logger */
#undef com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_BUFFER_SIZE
#define com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_BUFFER_SIZE 35280L
#undef com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_STREAMING_BUFFER_COUNT
#define com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_STREAMING_BUFFER_COUNT 5L
#undef com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_MAX_NUM_CHANNELS
#define com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_MAX_NUM_CHANNELS 64L
#undef com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_UPDATE_RATE
#define com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_UPDATE_RATE 0.05f
/* Inaccessible static: _00024assertionsDisabled */
/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alIsCreated
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alIsCreated
  (JNIEnv *, jclass);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alCreate
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alCreate
  (JNIEnv *, jclass);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alDestroy
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alDestroy
  (JNIEnv *, jclass);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alcGetString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alcGetString
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGetString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGetString
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGenSources
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGenSources
  (JNIEnv *, jclass);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGetError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGetError
  (JNIEnv *, jclass);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alDeleteSources
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alDeleteSources
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGenBuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGenBuffers
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alDeleteBuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alDeleteBuffers
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourceStop
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourceStop
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourcei
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourcei
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alBufferData
 * Signature: (IILjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alBufferData
  (JNIEnv *, jclass, jint, jint, jobject, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourcePlay
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourcePlay
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourcePause
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourcePause
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourcef
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourcef
  (JNIEnv *, jclass, jint, jint, jfloat);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSource3f
 * Signature: (IIFFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSource3f
  (JNIEnv *, jclass, jint, jint, jfloat, jfloat, jfloat);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGetSourcei
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGetSourcei
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourceUnqueueBuffers
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourceUnqueueBuffers
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSourceQueueBuffers
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSourceQueueBuffers
  (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alListener
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alListener
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alListenerf
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alListenerf
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alListener3f
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alListener3f
  (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alcIsExtensionPresent
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alcIsExtensionPresent
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alcGetInteger
 * Signature: (ILjava/nio/IntBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alcGetInteger
  (JNIEnv *, jclass, jint, jobject, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGenAuxiliaryEffectSlots
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGenAuxiliaryEffectSlots
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGenEffects
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGenEffects
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alEffecti
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alEffecti
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alAuxiliaryEffectSloti
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alAuxiliaryEffectSloti
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alDeleteEffects
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alDeleteEffects
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alDeleteAuxiliaryEffectSlots
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alDeleteAuxiliaryEffectSlots
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alGenFilters
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alGenFilters
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alFilteri
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alFilteri
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alFilterf
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alFilterf
  (JNIEnv *, jclass, jint, jint, jfloat);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alSource3i
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alSource3i
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alDeleteFilters
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alDeleteFilters
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     com_jme3_audio_android_AndroidOpenALSoftAudioRenderer
 * Method:    alEffectf
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_android_AndroidOpenALSoftAudioRenderer_alEffectf
  (JNIEnv *, jclass, jint, jint, jfloat);

#ifdef __cplusplus
}
#endif
#endif