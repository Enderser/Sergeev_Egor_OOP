cmake_minimum_required(VERSION 3.10)
project(HW11_2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(HW11_2
    main.cpp
    GenericCreature.h
    OceanCreature.h
    Amphibious.h
    TerrestrialCreature.h
    Bird.h
    Crocodile.h
    Alligator.h
    Pigeon.h
    Parrot.h
    Creator.h
)
