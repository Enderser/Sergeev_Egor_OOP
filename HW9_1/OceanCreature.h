#ifndef OCEAN_CREATURE_H
#define OCEAN_CREATURE_H

#include "GenericCreature.h"

class OceanCreature : public GenericCreature {
public:
    OceanCreature() {
        cout << "OceanCreature created" << endl;
    }

    void Swim() const {
        cout << "OceanCreature is swimming" << endl;
    }

    // Сокрытие метода Walk из родителя, если он есть (GenericCreature не имеет Walk)
    void Walk() = delete;
};

#endif // OCEAN_CREATURE_H
