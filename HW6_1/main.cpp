#include <iostream>
#include <vector>
#include <list>
#include <memory>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    // Конструктор с параметрами
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {
        cout << "Time object created: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Деструктор
    ~Time() {
        cout << "Time object destroyed: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Печать времени
    void print() const noexcept {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    // Создание одного объекта в динамической памяти
    Time* t1 = new Time(10, 20, 30);
    t1->print();

    // Создание массива объектов
    Time* times = new Time[3]{
        Time(1, 0, 0),
        Time(2, 30, 15),
        Time(3, 45, 50)
    };

    for (int i = 0; i < 3; i++)
        times[i].print();

    // Удаление объектов
    delete t1;
    delete[] times;

    // Использование стандартных контейнеров
    vector<Time> timeVector;
    timeVector.emplace_back(5, 10, 15);
    timeVector.emplace_back(6, 20, 25);

    list<Time> timeList;
    timeList.emplace_back(7, 30, 35);
    timeList.emplace_back(8, 40, 45);

    // Использование умных указателей
    shared_ptr<Time> sharedT = make_shared<Time>(12, 0, 0);
    unique_ptr<Time> uniqueT = make_unique<Time>(9, 15, 45);

    return 0;
}
