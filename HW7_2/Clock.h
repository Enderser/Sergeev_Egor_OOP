#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>
#include "Time.h"
using namespace std;

// Базовый класс Clock
class Clock {
public:
    Time time; // Поле для хранения времени

    Clock() {
        cout << "Clock: Default constructor called" << endl;
    }

    virtual ~Clock() {
        cout << "Clock: Destructor called" << endl;
    }

    virtual void ShowTime() const {
        cout << "Clock: ";
        time.PrintTime();
    }
};

#endif // CLOCK_H
