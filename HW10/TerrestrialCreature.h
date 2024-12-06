#ifndef TERRESTRIAL_CREATURE_H
#define TERRESTRIAL_CREATURE_H

#include "GenericCreature.h"

class TerrestrialCreature : public GenericCreature {
public:
    TerrestrialCreature() {
        cout << "TerrestrialCreature created" << endl;
    }

    ~TerrestrialCreature() {
        cout << "TerrestrialCreature destroyed" << endl;
    }

    void Walk() const {
        cout << "TerrestrialCreature is walking" << endl;
    }

    void Eat() const override {
        cout << "TerrestrialCreature eats fruits and grass" << endl;
    }
};

#endif // TERRESTRIAL_CREATURE_H
