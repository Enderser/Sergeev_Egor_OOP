cmake_minimum_required(VERSION 3.10)
project(HW12_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(HW12_1
    main.cpp
    House.h
    Fence.h
    Barn.h
    Developer.h
    ConcreteDevelopers.h
)
