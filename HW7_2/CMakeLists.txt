cmake_minimum_required(VERSION 3.10)
project(HW7_2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл
add_executable(HW7_2
    main.cpp
    Time.cpp
    Clock.h
    CuckooClock.h
    WallClock.h
    Watch.h
    SmartWatch.h
)
