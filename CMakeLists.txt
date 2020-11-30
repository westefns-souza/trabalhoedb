cmake_minimum_required(VERSION 3.10)
project(trabalho2)

SET(CMAKE_CXX_STANDARD 11)

INCLUDE_DIRECTORIES(include)

ADD_EXECUTABLE(
    prog
    
    src/list.cpp
    src/queue.cpp
    src/stack.cpp
    src/main.cpp
)