#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "House.h"

// Абстрактный класс Developer
class Developer {
public:
    virtual ~Developer() {}
    virtual House* BuildHouse() const = 0;
};

// Конкретные застройщики
class WoodDeveloper : public Developer {
public:
    House* BuildHouse() const override {
        return new WoodHouse();
    }
};

class BrickDeveloper : public Developer {
public:
    House* BuildHouse() const override {
        return new BrickHouse();
    }
};

class ConcreteDeveloper : public Developer {
public:
    House* BuildHouse() const override {
        return new ConcreteHouse();
    }
};

#endif
