cmake_minimum_required(VERSION 3.10)
project(HW10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл
add_executable(HW10
    main.cpp
    GenericCreature.h
    OceanCreature.h
    Amphibious.h
    TerrestrialCreature.h
    Bird.h
    Waterfowl.h
)
