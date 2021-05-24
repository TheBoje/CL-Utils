cmake_minimum_required(VERSION 3.18)
project(CL_Utils)

set(CMAKE_CXX_STANDARD 11)

include_directories(Graph/headers)
include_directories(Graph/source)

add_executable(CL_Utils
        Graph/headers/edge.h
        Graph/source/edge.cpp
        Graph/source/main.cpp Graph/source/node.cpp Graph/source/graph.cpp)
