#ifndef SMART_WATCH_H
#define SMART_WATCH_H

#include "Clock.h"

class SmartWatch : public Clock {
public:
    SmartWatch() {
        cout << "SmartWatch: Default constructor called" << endl;
    }

    ~SmartWatch() {
        cout << "SmartWatch: Destructor called" << endl;
    }

    void ShowTime() const override {
        cout << "SmartWatch: ";
        time.PrintTime();
        cout << "Smart features enabled!" << endl;
    }
};

#endif // SMART_WATCH_H
