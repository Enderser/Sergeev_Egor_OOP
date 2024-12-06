#ifndef WATERFOWL_H
#define WATERFOWL_H

#include "Bird.h"
#include "Swimmer.h"

class Waterfowl : public Bird, public Swimmer {
public:
    Waterfowl() {
        cout << "Waterfowl created" << endl;
    }
};

#endif // WATERFOWL_H
