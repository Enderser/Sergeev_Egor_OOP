#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class SimpleWatch; // Предварительное объявление класса
class Watch;       // Предварительное объявление класса

class Time {
    int hours, minutes, seconds;

    void Normalize();

public:
    Time();
    Time(int h, int m, int s);
    Time(const Time& t);

    Time& operator=(const Time& other);
    Time& operator+=(int s);
    Time operator+(int s) const;
    Time& operator-=(int s);
    Time operator-(int s) const;
    bool operator==(const Time& other) const;

    int ToSeconds() const;
    void PrintTime() const;

    // Дружественный класс
    friend class SimpleWatch;

    // Дружественные функции
    friend void ShowTime(const Time& t);
    friend void SetTime(Time& t, int h, int m, int s);
};

#endif // TIME_H
