#ifndef BRICK_HOUSE_BUILDER_H
#define BRICK_HOUSE_BUILDER_H

#include "Builder.h"

class BrickHouseBuilder : public Builder {
    House* house;
    HouseDocumentation* documentation;

public:
    BrickHouseBuilder() {
        house = new House();
        documentation = new HouseDocumentation();
    }

    ~BrickHouseBuilder() {
        delete house;
        delete documentation;
    }

    void BuildFloor() override {
        house->AddPart("Concrete floor");
        documentation->AddPage("Floor: Made of concrete");
    }

    void BuildWalls() override {
        house->AddPart("Brick walls");
        documentation->AddPage("Walls: Made of bricks");
    }

    void BuildRoof() override {
        house->AddPart("Tile roof");
        documentation->AddPage("Roof: Made of tiles");
    }

    void BuildWindows() override {
        house->AddPart("Glass windows");
        documentation->AddPage("Windows: Standard glass");
    }

    void BuildDoors() override {
        house->AddPart("Metal doors");
        documentation->AddPage("Doors: Made of metal");
    }

    House* GetHouse() override {
        return house;
    }

    HouseDocumentation* GetDocumentation() override {
        return documentation;
    }
};

#endif // BRICK_HOUSE_BUILDER_H
