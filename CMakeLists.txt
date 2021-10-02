cmake_minimum_required(VERSION 3.19)
project(LinkedLists)

set(CMAKE_CXX_STANDARD 14)

add_executable(LinkedLists unitTests.cpp LinkedList.h)

enable_testing()

add_subdirectory(googletest)
target_link_libraries(LinkedLists gtest_main)
