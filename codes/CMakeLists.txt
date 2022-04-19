cmake_minimum_required(VERSION 3.10)
project(realtimeEmbedded)

set(CMAKE_CXX_STANDARD 14)

add_executable(realtimeEmbedded main.cpp lib/motor.h lib/motor.cpp lib/distance.h lib/distance.cpp lib/weight.h lib/weight.cpp)

target_link_libraries(realtimeEmbedded  wiringPi)
target_link_libraries(realtimeEmbedded  pthread)
