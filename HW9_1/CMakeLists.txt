cmake_minimum_required(VERSION 3.10)
project(HW9_1)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл и все необходимые файлы заголовков
add_executable(HW9_1
    main.cpp
    GenericCreature.h
    OceanCreature.h
    Amphibious.h
    TerrestrialCreature.h
    Bird.h
    Waterfowl.h
)
