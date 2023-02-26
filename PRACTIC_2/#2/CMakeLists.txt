cmake_minimum_required(VERSION 3.24)
project(_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_2
        circle.cpp
        circle.h
        main.cpp)
