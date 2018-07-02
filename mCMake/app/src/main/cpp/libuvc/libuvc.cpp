#include "libuvc.h"
#include <android/log.h>
#include <libgen.h>
#include <unistd.h>

#define LOG_TAG "LibUvc_Jni"
#define LOGE(FMT, ...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "[%d*%s:%d:%s]:" FMT, \
							gettid(), basename(__FILE__), __LINE__, __FUNCTION__, ## __VA_ARGS__)

void uvcFunc()
{
	LOGE("uvc Func <<<<<<<<< ");
}