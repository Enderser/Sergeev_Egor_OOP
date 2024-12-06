#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director {
public:
    void Construct(Builder& builder) {
        builder.BuildFloor();
        builder.BuildWalls();
        builder.BuildRoof();
        builder.BuildWindows();
        builder.BuildDoors();
    }
};

#endif // DIRECTOR_H
