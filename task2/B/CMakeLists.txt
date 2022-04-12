cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fsanitize=address")
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_library(B_library lib.h lib.cpp)