#ifndef TERRESTRIAL_CREATURE_H
#define TERRESTRIAL_CREATURE_H

#include "GenericCreature.h"
#include "Walker.h"

class TerrestrialCreature : public GenericCreature, public Walker {
public:
    TerrestrialCreature() {
        cout << "TerrestrialCreature created" << endl;
    }
};

#endif // TERRESTRIAL_CREATURE_H
