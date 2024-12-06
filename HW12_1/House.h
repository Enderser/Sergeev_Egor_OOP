#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
using namespace std;

class House {
public:
    virtual ~House() {}
    virtual void Describe() const = 0;
};

class WoodHouse : public House {
public:
    void Describe() const override {
        cout << "Wooden House built." << endl;
    }
};

class BrickHouse : public House {
public:
    void Describe() const override {
        cout << "Brick House built." << endl;
    }
};

class ConcreteHouse : public House {
public:
    void Describe() const override {
        cout << "Concrete House built." << endl;
    }
};

#endif // HOUSE_H
