#include "Developer.h"
#include <vector>

void BuildQuarter(const Developer& developer, int houseCount) {
    cout << "\nBuilding a quarter with " << houseCount << " houses:" << endl;

    vector<House*> houses;
    for (int i = 0; i < houseCount; ++i) {
        houses.push_back(developer.BuildHouse()); // Построить дом
    }

    // Показать построенные дома
    for (const auto& house : houses) {
        house->Show();
    }

    // Очистить память
    for (auto& house : houses) {
        delete house;
    }
}

int main() {
    // Застройщики
    WoodDeveloper woodDeveloper;
    BrickDeveloper brickDeveloper;
    ConcreteDeveloper concreteDeveloper;

    // Застройка кварталов
    BuildQuarter(woodDeveloper, 8);  // Деревянные дома
    BuildQuarter(brickDeveloper, 10); // Кирпичные дома
    BuildQuarter(concreteDeveloper, 12); // Бетонные дома

    return 0;
}
