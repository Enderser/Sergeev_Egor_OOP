#ifndef CAR_H
#define CAR_H

#include "Transmission.h"

class Car {
    Transmission* currentGear;
    int engineRPM;

public:
    Car() : currentGear(new FirstGear()), engineRPM(1000) {}
    ~Car() {
        delete currentGear;
    }

    void SetGear(Transmission* newGear) {
        delete currentGear;
        currentGear = newGear;
    }

    void SetEngineRPM(int rpm) {
        if (rpm < 0) {
            cout << "Engine RPM cannot be negative. Setting to 0." << endl;
            engineRPM = 0;
        } else {
            engineRPM = rpm;
        }
    }

    void ShowSpeed() const {
        int speed = currentGear->GetSpeed(engineRPM);
        cout << "Current speed: " << speed << " km/h" << endl;
    }

    void ShowCurrentGear() const {
        if (dynamic_cast<FirstGear*>(currentGear)) cout << "Current gear: 1st" << endl;
        else if (dynamic_cast<SecondGear*>(currentGear)) cout << "Current gear: 2nd" << endl;
        else if (dynamic_cast<ThirdGear*>(currentGear)) cout << "Current gear: 3rd" << endl;
        else if (dynamic_cast<FourthGear*>(currentGear)) cout << "Current gear: 4th" << endl;
        else if (dynamic_cast<FifthGear*>(currentGear)) cout << "Current gear: 5th" << endl;
        else if (dynamic_cast<ReverseGear*>(currentGear)) cout << "Current gear: Reverse" << endl;
        else cout << "Unknown gear!" << endl;
    }
};

#endif // CAR_H
