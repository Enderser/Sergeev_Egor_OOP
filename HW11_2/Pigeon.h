#ifndef PIGEON_H
#define PIGEON_H

#include "Bird.h"

class Pigeon : public Bird {
public:
    void Eat() const override {
        cout << "Pigeon eats seeds" << endl;
    }
};
#endif // PIGEON_H
