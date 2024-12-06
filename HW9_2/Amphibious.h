#ifndef AMPHIBIOUS_H
#define AMPHIBIOUS_H

#include "OceanCreature.h"
#include "Walker.h"

class Amphibious : public OceanCreature, public Walker {
public:
    Amphibious() {
        cout << "Amphibious created" << endl;
    }
};

#endif // AMPHIBIOUS_H
