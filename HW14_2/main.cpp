#include "Time.h"
#include <vector>

int main() {
    cout << "Case 1: Using rvalue with constructor and assignment:\n";
    Time t1(10, 30, 45);
    Time t2 = Time(12, 0, 0); // Move constructor
    t1 = Time(14, 15, 20);    // Move assignment operator
    cout << endl;

    cout << "Case 2: Using lvalue with constructor and assignment:\n";
    Time t3(16, 45, 55);
    Time t4 = t3;             // Copy constructor
    t1 = t3;                  // Copy assignment operator
    cout << endl;

    cout << "Case 3: Adding to vector as rvalue:\n";
    vector<Time> times;
    times.push_back(Time(18, 0, 0)); // Move constructor
    times.push_back(Time(20, 15, 30)); // Move constructor
    cout << endl;

    cout << "Case 4: Adding to vector as lvalue:\n";
    Time t5(22, 30, 45);
    Time t6(23, 45, 0);
    times.push_back(t5); // Copy constructor
    times.push_back(t6); // Copy constructor

    cout << "\nFinal vector contents:\n";
    for (const auto& t : times) {
        t.PrintTime();
    }

    return 0;
}
