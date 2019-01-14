cmake_minimum_required(VERSION 3.10)
project(klient)

set(CMAKE_CXX_STANDARD 14)

add_executable(klient main.cpp proto.h send_sock_msg.cpp send_sock_msg.h auth_msg.cpp auth_msg.h create_msg.cpp create_msg.h open_msg.cpp open_msg.h operation_msg.cpp operation_msg.h)
