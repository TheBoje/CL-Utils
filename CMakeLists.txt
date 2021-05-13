cmake_minimum_required(VERSION 3.19)
project(CL_Utils C)

set(CMAKE_C_STANDARD 11)

include_directories(Graph/headers)

add_executable(CL_Utils
        Graph/headers/graph.h
        Graph/headers/node.h
        Graph/source/graph.c
        Graph/source/main.c
        Graph/source/node.c)
