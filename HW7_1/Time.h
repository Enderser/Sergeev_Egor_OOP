#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Watch;       // Предварительное объявление класса Watch
class SimpleWatch; // Предварительное объявление класса SimpleWatch

class Time {
    int hours, minutes, seconds;

    void Normalize(); // Приведение времени в корректный диапазон

public:
    Time(); // Конструктор по умолчанию
    Time(int h, int m, int s); // Конструктор с параметрами
    Time(const Time& t); // Конструктор копирования

    Time& operator=(const Time& other); // Оператор присваивания
    Time& operator+=(int s); // Добавление секунд
    Time operator+(int s) const; // Добавление секунд, возвращает новое время
    Time& operator-=(int s); // Вычитание секунд
    Time operator-(int s) const; // Вычитание секунд, возвращает новое время
    bool operator==(const Time& other) const; // Оператор сравнения

    int ToSeconds() const; // Перевод времени в секунды от полуночи
    void PrintTime() const; // Вывод времени

    // Дружественные классы
    friend class Watch;
    friend class SimpleWatch;
};

#endif // TIME_H
