#ifndef BARN_H
#define BARN_H

#include <iostream>
using namespace std;

class Barn {
public:
    virtual ~Barn() {}
    virtual void Describe() const = 0;
};

class WoodBarn : public Barn {
public:
    void Describe() const override {
        cout << "Wooden Barn built." << endl;
    }
};

class BrickBarn : public Barn {
public:
    void Describe() const override {
        cout << "Brick Barn built." << endl;
    }
};

class ConcreteBarn : public Barn {
public:
    void Describe() const override {
        cout << "Concrete Barn built." << endl;
    }
};

#endif // BARN_H
