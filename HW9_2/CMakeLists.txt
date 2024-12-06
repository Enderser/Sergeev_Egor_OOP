cmake_minimum_required(VERSION 3.10)
project(HW9_2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл
add_executable(HW9_2
    main.cpp
    GenericCreature.h
    Swimmer.h
    Walker.h
    Flyer.h
    OceanCreature.h
    Amphibious.h
    TerrestrialCreature.h
    Bird.h
    Waterfowl.h
)
