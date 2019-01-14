cmake_minimum_required(VERSION 3.13)
project(klient)

set(CMAKE_CXX_STANDARD 14)

add_executable(klient main.cpp proto.h auth.cpp auth.h send_sock_msg.cpp send_sock_msg.h auth_msg.cpp auth_msg.h open.cpp open.h)