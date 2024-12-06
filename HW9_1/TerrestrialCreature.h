#ifndef TERRESTRIAL_CREATURE_H
#define TERRESTRIAL_CREATURE_H

#include "GenericCreature.h"

class TerrestrialCreature : public GenericCreature {
public:
    TerrestrialCreature() {
        cout << "TerrestrialCreature created" << endl;
    }

    void Walk() const {
        cout << "TerrestrialCreature is walking" << endl;
    }

    // Сокрытие метода Swim
    void Swim() = delete;
};

#endif // TERRESTRIAL_CREATURE_H
