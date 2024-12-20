cmake_minimum_required(VERSION 3.10)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(GameOfLife
    main.cpp
    Rule.cpp
    Universe.cpp
    Rule.h
    Universe.h
)
