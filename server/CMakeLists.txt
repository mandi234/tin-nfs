cmake_minimum_required(VERSION 3.13)
project(kamil)

set(CMAKE_CXX_STANDARD 14)

add_executable(kamil  main.cpp proto.h proto.cpp error.h auth.cpp auth.h open.cpp open.h operation.cpp operation.h user/user.h user/user.cpp common/singleton.h open_handlers/open_msg_handler.cpp open_handlers/open_msg_handler.h operation_handlers/operation_msg_handler.cpp operation_handlers/operation_msg_handler.h dirp/dirp_holder.cpp dirp/dirp_holder.h)


target_link_libraries (kamil -pthread)