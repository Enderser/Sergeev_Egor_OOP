#ifndef WATERFOWL_H
#define WATERFOWL_H

#include "Bird.h"
#include "OceanCreature.h"

class Waterfowl : public Bird {
public:
    Waterfowl() {
        cout << "Waterfowl created" << endl;
    }

    ~Waterfowl() {
        cout << "Waterfowl destroyed" << endl;
    }

    void Swim() const {
        cout << "Waterfowl is swimming" << endl;
    }

    void Eat() const override {
        cout << "Waterfowl eats fish and plants" << endl;
    }
};

#endif // WATERFOWL_H
