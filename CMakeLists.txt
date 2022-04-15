cmake_minimum_required(VERSION 3.13)
project(realtimeEmbedded)

set(CMAKE_CXX_STANDARD 14)

add_executable(realtimeEmbedded  ult.h ult.cpp )
target_link_libraries(realtimeEmbedded  wiringPi)