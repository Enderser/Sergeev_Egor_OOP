#ifndef OCEAN_CREATURE_H
#define OCEAN_CREATURE_H

#include "GenericCreature.h"
#include "Swimmer.h"

class OceanCreature : public GenericCreature, public Swimmer {
public:
    OceanCreature() {
        cout << "OceanCreature created" << endl;
    }
};

#endif // OCEAN_CREATURE_H
