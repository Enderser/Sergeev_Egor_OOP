cmake_minimum_required(VERSION 3.10)
project(HW11_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл
add_executable(HW11_1
    main.cpp
    House.h
    Developer.h
)
