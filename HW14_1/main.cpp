#include "Car.h"

int main() {
    Car myCar;

    cout << "Initial state:" << endl;
    myCar.ShowCurrentGear();
    myCar.ShowSpeed();

    cout << "\nSwitching to 3rd gear:" << endl;
    myCar.SetGear(new ThirdGear());
    myCar.SetEngineRPM(3000);
    myCar.ShowCurrentGear();
    myCar.ShowSpeed();

    cout << "\nSwitching to 5th gear:" << endl;
    myCar.SetGear(new FifthGear());
    myCar.SetEngineRPM(4000);
    myCar.ShowCurrentGear();
    myCar.ShowSpeed();

    cout << "\nSwitching to Reverse gear:" << endl;
    myCar.SetGear(new ReverseGear());
    myCar.SetEngineRPM(2000);
    myCar.ShowCurrentGear();
    myCar.ShowSpeed();

    return 0;
}
