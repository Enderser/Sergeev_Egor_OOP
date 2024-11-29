#ifndef CUCKOO_CLOCK_H
#define CUCKOO_CLOCK_H

#include "Clock.h"

class CuckooClock : public Clock {
public:
    CuckooClock() {
        cout << "CuckooClock: Default constructor called" << endl;
    }

    ~CuckooClock() {
        cout << "CuckooClock: Destructor called" << endl;
    }

    void ShowTime() const override {
        cout << "CuckooClock: ";
        time.PrintTime();
        cout << "Cuckoo sound!" << endl;
    }
};

#endif // CUCKOO_CLOCK_H
