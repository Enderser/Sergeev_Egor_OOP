#include "SimpleWatch.h"
#include "Watch.h"

int main() {
    Time t(10, 59, 30);

    SimpleWatch simpleWatch;
    simpleWatch.ShowTime(t);
    simpleWatch.SetTime(t, 12, 0, 0);
    simpleWatch.ShowTime(t);

    Watch watch;
    ShowTime(t);
    SetTime(t, 18, 30, 45);
    ShowTime(t);

    return 0;
}
