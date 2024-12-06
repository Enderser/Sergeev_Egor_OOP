#include "ConcreteDevelopers.h"
#include <vector>

void BuildPlot(const Developer& developer) {
    cout << "Building a plot:" << endl;

    House* house = developer.BuildHouse();
    Fence* fence = developer.BuildFence();
    Barn* barn = developer.BuildBarn();

    house->Describe();
    fence->Describe();
    barn->Describe();

    delete house;
    delete fence;
    delete barn;

    cout << endl;
}

int main() {
    WoodDeveloper woodDeveloper;
    BrickDeveloper brickDeveloper;
    ConcreteDeveloper concreteDeveloper;

    BuildPlot(woodDeveloper);   // Деревянный участок
    BuildPlot(brickDeveloper);  // Кирпичный участок
    BuildPlot(concreteDeveloper); // Бетонный участок

    return 0;
}
