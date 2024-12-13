#ifndef SIMPLEWATCH_H
#define SIMPLEWATCH_H

#include "Time.h"

class SimpleWatch {
public:
    void ShowTime(const Time& t) const {
        cout << "SimpleWatch shows: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
    }

    void SetTime(Time& t, int h, int m, int s) const {
        t.hours = h;
        t.minutes = m;
        t.seconds = s;
        t.Normalize();
    }
};

#endif // SIMPLEWATCH_H
