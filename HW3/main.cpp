#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    // Конструкторы
    Time() : hours(0), minutes(0), seconds(0) {}; // Конструктор по умолчанию
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        Normalize(); // Применяем нормализацию для приведения времени в корректный диапазон
    }

    // Конструктор копирования
    Time(const Time& t) : Time(t.hours, t.minutes, t.seconds) {
        hours += 2; // для примера
        minutes -= 1;
        Normalize(); // Применяем нормализацию для корректности
    }

    // Оператор присваивания
    Time& operator= (const Time& other) {
        this->hours = other.hours;
        minutes = other.minutes + 10; // для примера
        seconds = other.seconds + 30;
        Normalize(); // Применяем нормализацию
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
        // Приведение секунд в диапазон 0–59
        if (seconds < 0) {
            minutes -= (abs(seconds) / 60 + 1);
            seconds = 60 - abs(seconds) % 60;
        } else if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }

        // Приведение минут в диапазон 0–59
        if (minutes < 0) {
            hours -= (abs(minutes) / 60 + 1);
            minutes = 60 - abs(minutes) % 60;
        } else if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }

        // Приведение часов в диапазон 0–23
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

    // Методы доступа
    int GetHours() const { return hours; }
    int GetMinutes() const { return minutes; }
    int GetSeconds() const { return seconds; }

    // Вывод времени
    void PrintTime() const {
        cout << "H: " << GetHours() << " M: " << GetMinutes() << " S: " << GetSeconds() << endl;
    }
};

int main() {
    // Тестирование класса Time
    Time t1(23, 59, 70); // Пример для проверки нормализации
    t1.PrintTime();      // Должно вывести нормализованное время

    Time t2(25, -120, 90); // Пример для проверки отрицательных значений
    t2.PrintTime();        // Должно вывести нормализованное время

    Time t3(10, 30, 0);
    cout << "Seconds from start of the day: " << t3.ToSeconds() << endl; // Должно вывести 37800

    // Операции += и -=
    t3 += 120;  // Добавить 120 секунд
    t3.PrintTime(); // Должно корректно отразить изменения

    t3 -= 3600; // Вычесть 3600 секунд (1 час)
    t3.PrintTime(); // Должно корректно отразить изменения

    // Оператор сравнения
    Time t4(10, 32, 0);
    cout << (t3 == t4 ? "t3 equals t4" : "t3 does not equal t4") << endl;

    return 0;
}
