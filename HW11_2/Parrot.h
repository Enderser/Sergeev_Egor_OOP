#ifndef PARROT_H
#define PARROT_H

#include "Bird.h"

class Parrot : public Bird {
public:
    void Eat() const override {
        cout << "Parrot eats fruits" << endl;
    }
};
#endif // PARROT_H
