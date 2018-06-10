cmake_minimum_required(VERSION 2.8)

# 项目信息
project (Wink)

# <= 新增的编译选项
add_definitions("-Wall -std=c++11")

# 添加子文件夹
add_subdirectory(ffmpeg)
add_subdirectory(libusb)
add_subdirectory(libuvc)

# 添加头文件目录
include_directories(ffmpeg)
include_directories(libusb)
include_directories(libuvc)

# 指定生成目标
add_executable(Main src/main.cpp)

# 链接其他库
target_link_libraries(Main libffmpeg libusb libuvc)