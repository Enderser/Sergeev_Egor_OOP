#include <iostream>
#include <stdexcept>
#include <memory>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    // Конструктор с проверкой на отрицательные значения
    Time(int h, int m, int s) {
        if (h < 0 || m < 0 || s < 0)
            throw invalid_argument("Time values must be non-negative!");
        hours = h;
        minutes = m;
        seconds = s;
        cout << "Time object created: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    ~Time() {
        cout << "Time object destroyed: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Печать времени
    void print() const noexcept {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    try {
        // Создание объекта с отрицательным значением вызывает исключение
        Time t1(-5, 10, 20); // Исключение
    } catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        // Создание объекта с корректными данными
        Time t2(3, 15, 45);
        t2.print();
    } catch (const invalid_argument& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
