cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(lfptools)

# Options: Debug Release RelWithDebInfo MinSizeRel
set(CMAKE_BUILD_TYPE Release)

find_package(OpenCV REQUIRED COMPONENTS core imgproc highgui)

add_executable(lfpsplitter lfpsplitter.c)

add_executable(debayer debayer.cpp)
target_link_libraries(debayer ${OpenCV_LIBS})
