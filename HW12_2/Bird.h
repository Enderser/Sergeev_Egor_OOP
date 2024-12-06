#ifndef BIRD_H
#define BIRD_H

#include "GenericCreature.h"

class Bird : public GenericCreature {
public:
    virtual ~Bird() {}
};

class Pigeon : public Bird {
public:
    void Eat() const override {
        cout << "Pigeon eats seeds." << endl;
    }
};

class Parrot : public Bird {
public:
    void Eat() const override {
        cout << "Parrot eats fruits." << endl;
    }
};

#endif // BIRD_H
