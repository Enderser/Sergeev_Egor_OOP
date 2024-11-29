#include "GenericCreature.h"
#include "OceanCreature.h"
#include "Amphibious.h"
#include "TerrestrialCreature.h"
#include "Bird.h"
#include "Waterfowl.h"

int main() {
    cout << "Creating a generic creature:" << endl;
    GenericCreature creature;
    creature.Breathe();

    cout << "\nCreating an ocean creature:" << endl;
    OceanCreature oceanCreature;
    oceanCreature.Breathe();
    oceanCreature.Swim();

    cout << "\nCreating an amphibious creature:" << endl;
    Amphibious amphibious;
    amphibious.Breathe();
    amphibious.Swim();
    amphibious.Walk();

    cout << "\nCreating a terrestrial creature:" << endl;
    TerrestrialCreature terrestrialCreature;
    terrestrialCreature.Breathe();
    terrestrialCreature.Walk();

    cout << "\nCreating a bird:" << endl;
    Bird bird;
    bird.Breathe();
    bird.Walk();
    bird.Fly();

    cout << "\nCreating a waterfowl:" << endl;
    Waterfowl waterfowl;
    waterfowl.Breathe();
    waterfowl.Walk();
    waterfowl.Fly();
    waterfowl.Swim();

    return 0;
}
