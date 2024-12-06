#ifndef BIRD_H
#define BIRD_H

#include "TerrestrialCreature.h"
#include "Flyer.h"

class Bird : public TerrestrialCreature, public Flyer {
public:
    Bird() {
        cout << "Bird created" << endl;
    }
};

#endif // BIRD_H
