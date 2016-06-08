cmake_minimum_required(VERSION 3.5)
project(bmath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/Number.cpp src/Number.h src/AddNumber.cpp src/AddNumber.h src/NumberOperation.cpp src/NumberOperation.h)
add_executable(bmath ${SOURCE_FILES})