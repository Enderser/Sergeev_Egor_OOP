#ifndef SIMPLEWATCH_H
#define SIMPLEWATCH_H

#include "Time.h"
#include <iostream>
using namespace std;

class SimpleWatch {
public:
    // Вывод времени из объекта Time
    void ShowTime(const Time& t) const {
        cout << "Time: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
    }

    // Установка времени в объекте Time
    void SetTime(Time& t, int h, int m, int s) const {
        t.hours = h;
        t.minutes = m;
        t.seconds = s;
        t.Normalize();
    }
};

#endif // SIMPLEWATCH_H
