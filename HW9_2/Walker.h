#ifndef WALKER_H
#define WALKER_H

#include <iostream>
using namespace std;

class Walker {
public:
    Walker() {
        cout << "Walker created" << endl;
    }

    void Walk() const {
        cout << "Walker is walking" << endl;
    }
};

#endif // WALKER_H
