#ifndef WATCH_H
#define WATCH_H

#include "Time.h"
#include <iostream>
using namespace std;

class Watch {
    bool is12HourFormat; // true для 12-часового формата, false для 24-часового

public:
    Watch() : is12HourFormat(false) {}

    // Установка формата времени
    void SetFormat(bool format) {
        is12HourFormat = format;
    }

    // Вывод времени
    void ShowTime(const Time& t) const {
        int hoursToShow = t.hours;
        string suffix = "";

        if (is12HourFormat) {
            if (hoursToShow == 0) {
                hoursToShow = 12;
                suffix = " AM";
            } else if (hoursToShow < 12) {
                suffix = " AM";
            } else if (hoursToShow == 12) {
                suffix = " PM";
            } else {
                hoursToShow -= 12;
                suffix = " PM";
            }
        }

        cout << "Time: " << hoursToShow << ":" << t.minutes << ":" << t.seconds << suffix << endl;
    }

    // Установка времени
    void SetTime(Time& t, int h, int m, int s) const {
        t.hours = h;
        t.minutes = m;
        t.seconds = s;
        t.Normalize();
    }
};

#endif // WATCH_H
