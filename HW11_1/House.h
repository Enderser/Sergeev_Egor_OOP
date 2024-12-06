#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <string>
using namespace std;

// Абстрактный класс House
class House {
public:
    virtual ~House() {}
    virtual void Show() const = 0;
};

// Конкретные классы домов
class WoodHouse : public House {
public:
    void Show() const override {
        cout << "Wood House built." << endl;
    }
};

class BrickHouse : public House {
public:
    void Show() const override {
        cout << "Brick House built." << endl;
    }
};

class ConcreteHouse : public House {
public:
    void Show() const override {
        cout << "Concrete House built." << endl;
    }
};

#endif
