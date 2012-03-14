cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(lfptools)

# Options: Debug Release RelWithDebInfo MinSizeRel
set(CMAKE_BUILD_TYPE Release)

add_executable(lfpsplitter lfpsplitter.c)
