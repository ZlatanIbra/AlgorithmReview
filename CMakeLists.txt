cmake_minimum_required(VERSION 3.7)
project(HelloCLion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp SortTestHelper.h SelectionSort.h InsertionSort.h)
add_executable(HelloCLion ${SOURCE_FILES})