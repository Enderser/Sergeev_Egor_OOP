#ifndef TRANSMISSION_H
#define TRANSMISSION_H

#include <iostream>
using namespace std;

// Абстрактный класс Transmission
class Transmission {
public:
    virtual ~Transmission() {}
    virtual int GetSpeed(int engineRPM) const = 0; // Расчёт скорости
};

// Конкретные классы передач
class FirstGear : public Transmission {
public:
    int GetSpeed(int engineRPM) const override {
        return engineRPM / 100;
    }
};

class SecondGear : public Transmission {
public:
    int GetSpeed(int engineRPM) const override {
        return engineRPM / 80;
    }
};

class ThirdGear : public Transmission {
public:
    int GetSpeed(int engineRPM) const override {
        return engineRPM / 60;
    }
};

class FourthGear : public Transmission {
public:
    int GetSpeed(int engineRPM) const override {
        return engineRPM / 50;
    }
};

class FifthGear : public Transmission {
public:
    int GetSpeed(int engineRPM) const override {
        return engineRPM / 40;
    }
};

class ReverseGear : public Transmission {
public:
    int GetSpeed(int engineRPM) const override {
        return -(engineRPM / 100);
    }
};

#endif // TRANSMISSION_H
