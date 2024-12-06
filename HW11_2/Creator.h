#ifndef CREATOR_H
#define CREATOR_H

#include "Crocodile.h"
#include "Alligator.h"
#include "Pigeon.h"
#include "Parrot.h"

class Creator {
public:
    virtual ~Creator() {}
    virtual GenericCreature* CreateCreature() const = 0;
};

class CrocodileCreator : public Creator {
public:
    GenericCreature* CreateCreature() const override {
        return new Crocodile();
    }
};

class AlligatorCreator : public Creator {
public:
    GenericCreature* CreateCreature() const override {
        return new Alligator();
    }
};

class PigeonCreator : public Creator {
public:
    GenericCreature* CreateCreature() const override {
        return new Pigeon();
    }
};

class ParrotCreator : public Creator {
public:
    GenericCreature* CreateCreature() const override {
        return new Parrot();
    }
};
#endif // CREATOR_H
