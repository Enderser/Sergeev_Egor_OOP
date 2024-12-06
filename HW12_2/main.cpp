#include "Creator.h"
#include <vector>

void CreateAndFeedZoo(const Creator& factory, int count) {
    cout << "Creating a zoo:\n";

    vector<GenericCreature*> creatures;

    for (int i = 0; i < count; ++i) {
        creatures.push_back(factory.CreateAmphibious());
        creatures.push_back(factory.CreateBird());
    }

    for (const auto& creature : creatures) {
        creature->Eat();
        delete creature;
    }

    cout << endl;
}

int main() {
    CrocodileFactory crocodileFactory;
    AlligatorFactory alligatorFactory;

    CreateAndFeedZoo(crocodileFactory, 3);
    CreateAndFeedZoo(alligatorFactory, 3);

    return 0;
}
