#ifndef WATERFOWL_H
#define WATERFOWL_H

#include "Bird.h"

class Waterfowl : public Bird {
public:
    Waterfowl() {
        cout << "Waterfowl created" << endl;
    }

    ~Waterfowl() {
        cout << "Waterfowl destroyed" << endl;
    }

    void Swim() const {
        cout << "Waterfowl is swimming" << endl;
    }
};

#endif // WATERFOWL_H
