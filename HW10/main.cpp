#include "GenericCreature.h"
#include "OceanCreature.h"
#include "Amphibious.h"
#include "TerrestrialCreature.h"
#include "Bird.h"
#include "Waterfowl.h"

int main() {
    // Массив объектов (НЕ полиморфный)
    cout << "Non-polymorphic behavior:\n";
    OceanCreature ocean;
    Amphibious amphibious;
    TerrestrialCreature terrestrial;
    Bird bird;
    Waterfowl waterfowl;

    ocean.Eat();
    amphibious.Eat();
    terrestrial.Eat();
    bird.Eat();
    waterfowl.Eat();

    // Массив указателей (полиморфный)
    cout << "\nPolymorphic behavior:\n";
    GenericCreature* creatures[] = {
        new OceanCreature(),
        new Amphibious(),
        new TerrestrialCreature(),
        new Bird(),
        new Waterfowl()
    };

    for (GenericCreature* creature : creatures) {
        creature->Breathe();
        creature->Eat(); // Полиморфный вызов
        cout << endl;
    }

    // Очистка памяти
    for (GenericCreature* creature : creatures) {
        delete creature;
    }

    return 0;
}
