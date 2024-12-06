#include "Director.h"
#include "WoodHouseBuilder.h"
#include "BrickHouseBuilder.h"

void CreateHouse(Builder& builder) {
    Director director;
    director.Construct(builder);

    House* house = builder.GetHouse();
    HouseDocumentation* documentation = builder.GetDocumentation();

    house->Show();
    documentation->Show();

    delete house;
    delete documentation;
}

int main() {
    WoodHouseBuilder woodBuilder;
    BrickHouseBuilder brickBuilder;

    cout << "Wooden House:\n";
    CreateHouse(woodBuilder);

    cout << "\nBrick House:\n";
    CreateHouse(brickBuilder);

    return 0;
}
