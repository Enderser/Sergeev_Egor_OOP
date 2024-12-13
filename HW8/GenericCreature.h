#ifndef GENERIC_CREATURE_H
#define GENERIC_CREATURE_H

#include <iostream>
using namespace std;

class GenericCreature {
public:
    GenericCreature() {
        cout << "GenericCreature created" << endl;
    }

    virtual ~GenericCreature() {
        cout << "GenericCreature destroyed" << endl;
    }

    virtual void Breathe() const {
        cout << "GenericCreature is breathing" << endl;
    }
};

#endif // GENERIC_CREATURE_H
