cmake_minimum_required(VERSION 2.8)

add_definitions("-Wall -std=c++11")

include_directories("${PROJECT_BINARY_DIR}")

add_library(libffmpeg STATIC
	ffmpeg.cpp
	)