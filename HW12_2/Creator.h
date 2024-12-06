#ifndef CREATOR_H
#define CREATOR_H

#include "Amphibious.h"
#include "Bird.h"

class Creator {
public:
    virtual ~Creator() {}
    virtual Amphibious* CreateAmphibious() const = 0;
    virtual Bird* CreateBird() const = 0;
};

class CrocodileFactory : public Creator {
public:
    Amphibious* CreateAmphibious() const override {
        return new Crocodile();
    }

    Bird* CreateBird() const override {
        return new Pigeon();
    }
};

class AlligatorFactory : public Creator {
public:
    Amphibious* CreateAmphibious() const override {
        return new Alligator();
    }

    Bird* CreateBird() const override {
        return new Parrot();
    }
};

#endif // CREATOR_H
