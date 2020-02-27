#include <jni.h>
#include <string>
#include <android/log.h>
#include <glm/glm.hpp>
#include <GLES3/gl3.h>
#include <android/asset_manager_jni.h>
#include "Renderer.h"
#include "AssetsLoader.h"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
AAssetManager *mgr;
static Renderer *ren;


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidgameproject_JniLib_stringFromJNI(
        JNIEnv *env,
       jclass) {
    std::string hello = "Hello from C++";
    int a = 2;
    return env->NewStringUTF(hello.c_str());

}
extern "C" JNIEXPORT void JNICALL
Java_com_example_androidgameproject_GLView_00024Renderer_setAssetManager(
        JNIEnv *env,
        jobject,jobject assetManager) {
      mgr = AAssetManager_fromJava(env,assetManager);
     // env->DeleteGlobalRef(assetManager);

}



extern "C" JNIEXPORT void JNICALL
Java_com_example_androidgameproject_GLView_00024Renderer_init(
        JNIEnv *env,
        jobject) {
        ren = new Renderer();
        ren->init();
        //ren.init();
}


extern "C" JNIEXPORT void JNICALL
Java_com_example_androidgameproject_GLView_00024Renderer_render(
        JNIEnv *env,
        jobject /* this */) {
    ren->render();
    //ren.render();
}
