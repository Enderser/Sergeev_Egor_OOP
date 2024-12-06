#ifndef ALLIGATOR_H
#define ALLIGATOR_H

#include "Amphibious.h"

class Alligator : public Amphibious {
public:
    void Eat() const override {
        cout << "Alligator eats arms" << endl;
    }
};
#endif // ALLIGATOR_H
