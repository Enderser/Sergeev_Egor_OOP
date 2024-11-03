#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
    static int object_count; // Статическая переменная для отслеживания количества объектов

public:
    // Конструктор по умолчанию
    Time() : hours(0), minutes(0), seconds(0) {
        ++object_count;
        cout << "Default constructor called. Object count: " << object_count << endl;
    }

    // Конструктор с параметрами
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        Normalize(); // Приводим время в корректный диапазон
        ++object_count;
        cout << "Parameterized constructor called. Object count: " << object_count << endl;
    }

    // Конструктор копирования
    Time(const Time& t) : hours(t.hours + 2), minutes(t.minutes - 1), seconds(t.seconds) {
        Normalize(); // Приводим время в корректный диапазон
        ++object_count;
        cout << "Copy constructor called. Object count: " << object_count << endl;
    }

    // Оператор присваивания
    Time& operator= (const Time& other) {
        hours = other.hours;
        minutes = other.minutes + 10; // для примера
        seconds = other.seconds + 30;
        Normalize();
        cout << "Assignment operator called." << endl;
        return *this;
    }

    // Оператор += для добавления секунд
    Time& operator += (int s) {
        seconds += s;
        Normalize();
        return *this;
    }

    // Оператор + для добавления секунд
    Time operator + (int s) const {
        Time result(*this);
        result += s;
        return result;
    }

    // Оператор -= для вычитания секунд
    Time& operator -= (int s) {
        seconds -= s;
        Normalize();
        return *this;
    }

    // Оператор - для вычитания секунд
    Time operator - (int s) const {
        Time result(*this);
        result -= s;
        return result;
    }

    // Оператор сравнения ==
    bool operator== (const Time& other) const {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }

    // Нормализация времени
    void Normalize() {
        if (seconds < 0) {
            minutes -= (abs(seconds) / 60 + 1);
            seconds = 60 - abs(seconds) % 60;
        } else if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }

        if (minutes < 0) {
            hours -= (abs(minutes) / 60 + 1);
            minutes = 60 - abs(minutes) % 60;
        } else if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }

        if (hours < 0) {
            hours = 24 + hours % 24;
        } else if (hours >= 24) {
            hours %= 24;
        }
    }

    // Перевод текущего времени в количество секунд от начала дня
    int ToSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    // Деструктор
    ~Time() {
        --object_count;
        cout << "Destructor called. Object count: " << object_count << endl;
    }

    // Методы доступа
    int GetHours() const { return hours; }
    int GetMinutes() const { return minutes; }
    int GetSeconds() const { return seconds; }

    // Вывод времени
    void PrintTime() const {
        cout << "H: " << GetHours() << " M: " << GetMinutes() << " S: " << GetSeconds() << endl;
    }

    // Статический метод для получения количества объектов
    static int GetObjectCount() {
        return object_count;
    }
};

// Инициализация статической переменной
int Time::object_count = 0;

int main() {
    // Создаем объекты для тестирования
    Time t1;
    Time t2(12, 59, 70);
    Time t3 = t2;
    t1 = t3;

    cout << "Current object count: " << Time::GetObjectCount() << endl;

    {
        Time t4(5, 30, 45);
        t4.PrintTime();
    } // t4 выходит из области видимости, деструктор вызван автоматически

    cout << "Current object count after t4 is destroyed: " << Time::GetObjectCount() << endl;

    return 0;
}
