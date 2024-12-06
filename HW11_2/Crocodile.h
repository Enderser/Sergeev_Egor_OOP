#ifndef CROCODILE_H
#define CROCODILE_H

#include "Amphibious.h"

class Crocodile : public Amphibious {
public:
    void Eat() const override {
        cout << "Crocodile eats legs" << endl;
    }
};
#endif // CROCODILE_H
