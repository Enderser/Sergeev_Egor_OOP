cmake_minimum_required(VERSION 3.10)
project(CircularBufferProject)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исходные файлы
add_library(CircularBuffer circular_buffer.cpp)

# Настройка Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# Загружаем Google Test
FetchContent_MakeAvailable(googletest)

# Включаем тестирование
enable_testing()

# Добавляем исполняемый файл для тестов
add_executable(CircularBuffer_test circular_buffer_test.cpp)
target_link_libraries(CircularBuffer_test gtest_main CircularBuffer)

# Регистрация тестов
include(GoogleTest)
gtest_discover_tests(CircularBuffer_test)
