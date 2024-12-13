#ifndef OCEAN_CREATURE_H
#define OCEAN_CREATURE_H

#include "GenericCreature.h"

class OceanCreature : public GenericCreature {
public:
    OceanCreature() {
        cout << "OceanCreature created" << endl;
    }

    ~OceanCreature() {
        cout << "OceanCreature destroyed" << endl;
    }

    void Swim() const {
        cout << "OceanCreature is swimming" << endl;
    }
};

#endif // OCEAN_CREATURE_H
