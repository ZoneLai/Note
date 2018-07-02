cmake_minimum_required(VERSION 3.4.1)

# 项目信息
project (mCmake)

# <= 新增的编译选项
add_definitions("-Wall -std=c++11")

# 添加子文件夹
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ffmpeg)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/libusb)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/libuvc)

# 添加头文件目录
include_directories(ffmpeg)
include_directories(libusb)
include_directories(libuvc)

add_library(player
            SHARED
            src/native-lib.cpp)

find_library(log-lib
             log)

target_link_libraries(player
                      libffmpeg
                      libusb
                      libuvc
                      ${log-lib})