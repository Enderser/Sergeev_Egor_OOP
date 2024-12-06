#include "Creator.h"
#include <vector>

void FeedHerd(const Creator& creator, const string& food, int count) {
    vector<GenericCreature*> creatures;
    for (int i = 0; i < count; ++i) {
        creatures.push_back(creator.CreateCreature());
    }
    cout << "Feeding herd with " << food << ":" << endl;
    for (auto creature : creatures) {
        creature->Eat();
        delete creature;
    }
    cout << endl;
}

int main() {
    CrocodileCreator crocodileCreator;
    AlligatorCreator alligatorCreator;
    PigeonCreator pigeonCreator;
    ParrotCreator parrotCreator;

    FeedHerd(crocodileCreator, "legs", 3);
    FeedHerd(alligatorCreator, "arms", 3);
    FeedHerd(pigeonCreator, "seeds", 3);
    FeedHerd(parrotCreator, "fruits", 3);

    return 0;
}
