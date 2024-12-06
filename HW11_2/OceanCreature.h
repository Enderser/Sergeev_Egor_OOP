#ifndef OCEAN_CREATURE_H
#define OCEAN_CREATURE_H

#include "GenericCreature.h"

class OceanCreature : public GenericCreature {
public:
    void Swim() const {
        cout << "Swimming in the ocean" << endl;
    }
};
#endif // OCEAN_CREATURE_H
