cmake_minimum_required(VERSION 3.10)
project(HW5)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Опция для включения/выключения тестов
option(ENABLE_TESTS "Enable building tests" ON)

# Добавляем библиотеку Time
add_library(Time Time.cpp)

# Основное приложение
add_executable(TimeApp main.cpp)
target_link_libraries(TimeApp Time)

# Если тесты включены
if(ENABLE_TESTS)
    # Настройка Google Test
    include(FetchContent)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
    )
    FetchContent_MakeAvailable(googletest)

    # Добавляем исполняемый файл для тестов
    add_executable(Time_test Time_test.cpp)

    # Линкуем тесты с библиотекой Time и Google Test
    target_link_libraries(Time_test Time gtest_main)

    # Включаем тестирование
    enable_testing()
    include(GoogleTest)
    gtest_discover_tests(Time_test)
endif()
