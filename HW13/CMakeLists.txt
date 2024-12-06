cmake_minimum_required(VERSION 3.10)
project(HW13)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(HW13
    main.cpp
    House.h
    HouseDocumentation.h
    Builder.h
    WoodHouseBuilder.h
    BrickHouseBuilder.h
    Director.h
)
