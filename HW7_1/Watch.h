#ifndef WATCH_H
#define WATCH_H

#include "Time.h"

class Watch {
    bool is12HourFormat;

public:
    Watch() : is12HourFormat(false) {}

    void SetFormat(bool format) {
        is12HourFormat = format;
    }

    friend void ShowTime(const Time& t) {
        cout << "Watch shows: " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;
    }

    friend void SetTime(Time& t, int h, int m, int s) {
        t.hours = h;
        t.minutes = m;
        t.seconds = s;
        t.Normalize();
    }
};

#endif // WATCH_H
