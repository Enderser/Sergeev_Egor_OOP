#ifndef BIRD_H
#define BIRD_H

#include "TerrestrialCreature.h"

class Bird : public TerrestrialCreature {
public:
    void Fly() const {
        cout << "Flying in the sky" << endl;
    }
};
#endif // BIRD_H
