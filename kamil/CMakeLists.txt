cmake_minimum_required(VERSION 3.13)
project(kamil)

set(CMAKE_CXX_STANDARD 14)

add_executable(kamil  main.cpp proto.h proto.cpp error.h auth.cpp auth.h open.cpp open.h operation.cpp operation.h)

target_link_libraries (kamil -pthread)