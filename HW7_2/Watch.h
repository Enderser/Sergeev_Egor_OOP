#ifndef WATCH_H
#define WATCH_H

#include "Clock.h"

class Watch : public Clock {
public:
    Watch() {
        cout << "Watch: Default constructor called" << endl;
    }

    ~Watch() {
        cout << "Watch: Destructor called" << endl;
    }

    void ShowTime() const override {
        cout << "Watch: ";
        time.PrintTime();
    }
};

#endif // WATCH_H
