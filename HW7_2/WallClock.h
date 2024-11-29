#ifndef WALL_CLOCK_H
#define WALL_CLOCK_H

#include "Clock.h"

class WallClock : public Clock {
public:
    WallClock() {
        cout << "WallClock: Default constructor called" << endl;
    }

    ~WallClock() {
        cout << "WallClock: Destructor called" << endl;
    }

    void ShowTime() const override {
        cout << "WallClock: ";
        time.PrintTime();
    }
};

#endif // WALL_CLOCK_H
