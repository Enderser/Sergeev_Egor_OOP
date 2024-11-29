#include "Time.h"
#include "SimpleWatch.h"
#include "Watch.h"

int main() {
    Time t(23, 59, 59);

    // Используем SimpleWatch
    SimpleWatch simpleWatch;
    cout << "SimpleWatch:" << endl;
    simpleWatch.ShowTime(t);
    simpleWatch.SetTime(t, 10, 30, 45);
    simpleWatch.ShowTime(t);

    // Используем Watch
    Watch watch;
    cout << "\nWatch (24-hour format):" << endl;
    watch.ShowTime(t);

    watch.SetFormat(true); // Переключаем на 12-часовой формат
    cout << "Watch (12-hour format):" << endl;
    watch.ShowTime(t);

    watch.SetTime(t, 0, 15, 0);
    cout << "Watch (12-hour format):" << endl;
    watch.ShowTime(t);

    return 0;
}
