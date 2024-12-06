#ifndef GENERIC_CREATURE_H
#define GENERIC_CREATURE_H

#include <iostream>
using namespace std;

class GenericCreature {
public:
    virtual ~GenericCreature() {}
    virtual void Eat() const = 0;
};
#endif // GENERIC_CREATURE_H
