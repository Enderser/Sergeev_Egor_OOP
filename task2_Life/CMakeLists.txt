cmake_minimum_required(VERSION 3.10)
project(task2_Life)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    main.cpp
    Rule.cpp
    Universe.cpp
    Game.cpp
)

set(HEADERS
    Rule.h
    Universe.h
    Game.h
)

add_executable(GameOfLife ${SOURCES} ${HEADERS})

target_compile_options(GameOfLife PRIVATE -Wall -Wextra -Wpedantic)

target_include_directories(GameOfLife PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
