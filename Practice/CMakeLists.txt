cmake_minimum_required(VERSION 3.29)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

include_directories(Practice_Week1/include)

add_executable(DSA
        Practice_Week1/include/Hare_Array.h
        Practice_Week1/main.cpp
        Practice_Week1/src/Hare_Array.tpp)
