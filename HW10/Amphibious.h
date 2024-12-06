#ifndef AMPHIBIOUS_H
#define AMPHIBIOUS_H

#include "OceanCreature.h"

class Amphibious : public OceanCreature {
public:
    Amphibious() {
        cout << "Amphibious created" << endl;
    }

    ~Amphibious() {
        cout << "Amphibious destroyed" << endl;
    }

    void Walk() const {
        cout << "Amphibious is walking" << endl;
    }

    void Eat() const override {
        cout << "Amphibious eats insects and plants" << endl;
    }
};

#endif // AMPHIBIOUS_H
