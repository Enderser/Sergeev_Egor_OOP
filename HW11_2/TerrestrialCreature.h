#ifndef TERRESTRIAL_CREATURE_H
#define TERRESTRIAL_CREATURE_H

#include "GenericCreature.h"

class TerrestrialCreature : public GenericCreature {
public:
    void Walk() const {
        cout << "Walking on land" << endl;
    }
};
#endif // TERRESTRIAL_CREATURE_H
