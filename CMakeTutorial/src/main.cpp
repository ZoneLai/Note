#include <iostream>
#include "ffmpeg.h"
#include "libusb.h"
#include "libuvc.h"

int main(void)
{
	auto i = 100;
	
	ffmpegFunc();
	
	usbFunc();
	
	uvcFunc();
	
	system("pause");
	
	return 0;
}