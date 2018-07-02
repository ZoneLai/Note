#include <jni.h>
#include <string>
#include "libusb.h"
#include "libuvc.h"
#include "ffmpeg.h"

extern "C" {

JNIEXPORT jstring JNICALL Java_com_center_mcmake_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    ffmpegFunc();
    usbFunc();
    uvcFunc();
    return env->NewStringUTF(hello.c_str());
}

}
