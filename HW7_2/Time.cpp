#include "Time.h"

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    Normalize();
}

Time::Time(const Time& t) : hours(t.hours), minutes(t.minutes), seconds(t.seconds) {}

Time& Time::operator=(const Time& other) {
    hours = other.hours;
    minutes = other.minutes;
    seconds = other.seconds;
    return *this;
}

Time& Time::operator+=(int s) {
    seconds += s;
    Normalize();
    return *this;
}

Time Time::operator+(int s) const {
    Time result(*this);
    result += s;
    return result;
}

Time& Time::operator-=(int s) {
    seconds -= s;
    Normalize();
    return *this;
}

Time Time::operator-(int s) const {
    Time result(*this);
    result -= s;
    return result;
}

bool Time::operator==(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}

void Time::Normalize() {
    // Приведение секунд в диапазон [0, 59]
    if (seconds < 0) {
        minutes -= (abs(seconds) / 60 + 1);
        seconds = 60 - abs(seconds) % 60;
    }
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }

    // Приведение минут в диапазон [0, 59]
    if (minutes < 0) {
        hours -= (abs(minutes) / 60 + 1);
        minutes = 60 - abs(minutes) % 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }

    // Приведение часов в диапазон [0, 23]
    if (hours < 0) {
        hours = 24 + hours % 24;
    }
    hours %= 24;
}


int Time::ToSeconds() const {
    return hours * 3600 + minutes * 60 + seconds;
}

void Time::PrintTime() const {
    cout << "H: " << hours << " M: " << minutes << " S: " << seconds << endl;
}
