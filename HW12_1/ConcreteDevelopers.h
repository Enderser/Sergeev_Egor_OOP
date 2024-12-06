#ifndef CONCRETE_DEVELOPERS_H
#define CONCRETE_DEVELOPERS_H

#include "Developer.h"

class WoodDeveloper : public Developer {
public:
    House* BuildHouse() const override {
        return new WoodHouse();
    }

    Fence* BuildFence() const override {
        return new WoodFence();
    }

    Barn* BuildBarn() const override {
        return new WoodBarn();
    }
};

class BrickDeveloper : public Developer {
public:
    House* BuildHouse() const override {
        return new BrickHouse();
    }

    Fence* BuildFence() const override {
        return new BrickFence();
    }

    Barn* BuildBarn() const override {
        return new BrickBarn();
    }
};

class ConcreteDeveloper : public Developer {
public:
    House* BuildHouse() const override {
        return new ConcreteHouse();
    }

    Fence* BuildFence() const override {
        return new ConcreteFence();
    }

    Barn* BuildBarn() const override {
        return new ConcreteBarn();
    }
};

#endif // CONCRETE_DEVELOPERS_H
