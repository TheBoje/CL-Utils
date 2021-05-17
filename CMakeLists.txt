cmake_minimum_required(VERSION 3.18)
project(CL_Utils C)


include_directories(Graph/headers)

add_executable(CL_Utils
        Graph/headers/graph.h
        Graph/headers/node.h
        Graph/headers/edge.h
        Graph/source/graph.c
        Graph/source/node.c
        Graph/source/edge.c
        Graph/source/main.c)
