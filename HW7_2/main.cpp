#include "Clock.h"
#include "CuckooClock.h"
#include "WallClock.h"
#include "Watch.h"
#include "SmartWatch.h"

int main() {
    cout << "Creating clocks..." << endl;

    Clock* clocks[] = {
        new CuckooClock(),
        new WallClock(),
        new Watch(),
        new SmartWatch()
    };

    cout << "\nShowing time for each clock:\n" << endl;

    for (Clock* clock : clocks) {
        clock->ShowTime();
        cout << endl;
    }

    cout << "Deleting clocks..." << endl;
    for (Clock* clock : clocks) {
        delete clock;
    }

    return 0;
}
