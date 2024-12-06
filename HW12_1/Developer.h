#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "House.h"
#include "Fence.h"
#include "Barn.h"

class Developer {
public:
    virtual ~Developer() {}
    virtual House* BuildHouse() const = 0;
    virtual Fence* BuildFence() const = 0;
    virtual Barn* BuildBarn() const = 0;
};

#endif // DEVELOPER_H
