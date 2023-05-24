cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(undoredo)

add_executable(undoredo_exe 
    src/Interface.cpp
    src/Interface.h
    src/List.cpp
    src/List.h
    src/main.cpp
    src/Text.cpp
    src/Text.h
)