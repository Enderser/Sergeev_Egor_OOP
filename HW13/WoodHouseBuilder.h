#ifndef WOOD_HOUSE_BUILDER_H
#define WOOD_HOUSE_BUILDER_H

#include "Builder.h"

class WoodHouseBuilder : public Builder {
    House* house;
    HouseDocumentation* documentation;

public:
    WoodHouseBuilder() {
        house = new House();
        documentation = new HouseDocumentation();
    }

    ~WoodHouseBuilder() {
        delete house;
        delete documentation;
    }

    void BuildFloor() override {
        house->AddPart("Wooden floor");
        documentation->AddPage("Floor: Made of wood");
    }

    void BuildWalls() override {
        house->AddPart("Wooden walls");
        documentation->AddPage("Walls: Made of wood");
    }

    void BuildRoof() override {
        house->AddPart("Wooden roof");
        documentation->AddPage("Roof: Made of wood");
    }

    void BuildWindows() override {
        house->AddPart("Glass windows");
        documentation->AddPage("Windows: Standard glass");
    }

    void BuildDoors() override {
        house->AddPart("Wooden doors");
        documentation->AddPage("Doors: Made of wood");
    }

    House* GetHouse() override {
        return house;
    }

    HouseDocumentation* GetDocumentation() override {
        return documentation;
    }
};

#endif // WOOD_HOUSE_BUILDER_H
