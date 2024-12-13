#ifndef BIRD_H
#define BIRD_H

#include "TerrestrialCreature.h"

class Bird : public TerrestrialCreature {
public:
    Bird() {
        cout << "Bird created" << endl;
    }

    ~Bird() {
        cout << "Bird destroyed" << endl;
    }

    void Fly() const {
        cout << "Bird is flying" << endl;
    }
};

#endif // BIRD_H
