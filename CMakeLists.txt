cmake_minimum_required(VERSION 3.14)
project(lab1_download)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab1_download
        main.cpp
        student.cpp
        student.hpp)
