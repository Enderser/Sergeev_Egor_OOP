cmake_minimum_required(VERSION 3.5)

project(task0a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task0a main.cpp module1.h module2.h module1.cpp module2.cpp)
