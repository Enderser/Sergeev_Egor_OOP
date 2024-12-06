#ifndef AMPHIBIOUS_H
#define AMPHIBIOUS_H

#include "GenericCreature.h"

class Amphibious : public GenericCreature {
public:
    virtual ~Amphibious() {}
};

class Crocodile : public Amphibious {
public:
    void Eat() const override {
        cout << "Crocodile eats legs." << endl;
    }
};

class Alligator : public Amphibious {
public:
    void Eat() const override {
        cout << "Alligator eats arms." << endl;
    }
};

#endif // AMPHIBIOUS_H
