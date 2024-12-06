#ifndef SWIMMER_H
#define SWIMMER_H

#include <iostream>
using namespace std;

class Swimmer {
public:
    Swimmer() {
        cout << "Swimmer created" << endl;
    }

    void Swim() const {
        cout << "Swimmer is swimming" << endl;
    }
};

#endif // SWIMMER_H
