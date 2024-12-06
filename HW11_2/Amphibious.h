#ifndef AMPHIBIOUS_H
#define AMPHIBIOUS_H

#include "OceanCreature.h"

class Amphibious : public OceanCreature {
public:
    void Walk() const {
        cout << "Walking on land" << endl;
    }
};
#endif // AMPHIBIOUS_H
