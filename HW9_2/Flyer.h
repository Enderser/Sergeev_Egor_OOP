#ifndef FLYER_H
#define FLYER_H

#include <iostream>
using namespace std;

class Flyer {
public:
    Flyer() {
        cout << "Flyer created" << endl;
    }

    void Fly() const {
        cout << "Flyer is flying" << endl;
    }
};

#endif // FLYER_H
