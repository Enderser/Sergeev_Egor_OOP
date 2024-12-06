#ifndef FENCE_H
#define FENCE_H

#include <iostream>
using namespace std;

class Fence {
public:
    virtual ~Fence() {}
    virtual void Describe() const = 0;
};

class WoodFence : public Fence {
public:
    void Describe() const override {
        cout << "Wooden Fence built." << endl;
    }
};

class BrickFence : public Fence {
public:
    void Describe() const override {
        cout << "Brick Fence built." << endl;
    }
};

class ConcreteFence : public Fence {
public:
    void Describe() const override {
        cout << "Concrete Fence built." << endl;
    }
};

#endif // FENCE_H
