#ifndef BUILDER_H
#define BUILDER_H

#include "House.h"
#include "HouseDocumentation.h"

class Builder {
public:
    virtual ~Builder() {}
    virtual void BuildFloor() = 0;
    virtual void BuildWalls() = 0;
    virtual void BuildRoof() = 0;
    virtual void BuildWindows() = 0;
    virtual void BuildDoors() = 0;

    virtual House* GetHouse() = 0;
    virtual HouseDocumentation* GetDocumentation() = 0;
};

#endif // BUILDER_H
