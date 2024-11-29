#include "Time.h"

int main() {
    Time t1(23, 59, 70);
    t1.PrintTime();

    Time t2 = t1 + 120;
    t2.PrintTime();

    Time t3 = t2 - 180;
    t3.PrintTime();

    cout << (t1 == t3 ? "Equal" : "Not Equal") << endl;

    return 0;
}
