#ifndef TERRESTRIAL_CREATURE_H
#define TERRESTRIAL_CREATURE_H

#include "Amphibious.h"

class TerrestrialCreature : public Amphibious {
public:
    TerrestrialCreature() {
        cout << "TerrestrialCreature created" << endl;
    }

    ~TerrestrialCreature() {
        cout << "TerrestrialCreature destroyed" << endl;
    }

    void Run() const {
        cout << "TerrestrialCreature is running" << endl;
    }
};

#endif // TERRESTRIAL_CREATURE_H
