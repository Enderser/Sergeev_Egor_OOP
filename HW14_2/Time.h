#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time {
    int* hours;
    int* minutes;
    int* seconds;

public:
    // Конструктор по умолчанию
    Time() : hours(new int(0)), minutes(new int(0)), seconds(new int(0)) {}

    // Конструктор с параметрами
    Time(int h, int m, int s) : hours(new int(h)), minutes(new int(m)), seconds(new int(s)) {}

    // Конструктор копирования
    Time(const Time& t) : hours(new int(*t.hours)), minutes(new int(*t.minutes)), seconds(new int(*t.seconds)) {
        cout << "Copy constructor called." << endl;
    }

    // Конструктор перемещения
    Time(Time&& t) noexcept : hours(t.hours), minutes(t.minutes), seconds(t.seconds) {
        t.hours = nullptr;
        t.minutes = nullptr;
        t.seconds = nullptr;
        cout << "Move constructor called." << endl;
    }

    // Оператор присваивания
    Time& operator=(const Time& t) {
        if (this == &t) return *this;
        *hours = *t.hours;
        *minutes = *t.minutes;
        *seconds = *t.seconds;
        cout << "Copy assignment operator called." << endl;
        return *this;
    }

    // Оператор присваивания с перемещением
    Time& operator=(Time&& t) noexcept {
        if (this == &t) return *this;
        delete hours;
        delete minutes;
        delete seconds;
        hours = t.hours;
        minutes = t.minutes;
        seconds = t.seconds;
        t.hours = nullptr;
        t.minutes = nullptr;
        t.seconds = nullptr;
        cout << "Move assignment operator called." << endl;
        return *this;
    }

    // Деструктор
    ~Time() {
        delete hours;
        delete minutes;
        delete seconds;
    }

    // Вывод времени
    void PrintTime() const {
        cout << *hours << ":" << *minutes << ":" << *seconds << endl;
    }
};

#endif // TIME_H
