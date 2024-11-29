#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;

    void Normalize();

public:
    Time(); // Default constructor
    Time(int h, int m, int s); // Constructor with parameters
    Time(const Time& t); // Copy constructor

    Time& operator=(const Time& other); // Assignment operator
    Time& operator+=(int s); // Add seconds
    Time operator+(int s) const; // Add seconds, return new Time
    Time& operator-=(int s); // Subtract seconds
    Time operator-(int s) const; // Subtract seconds, return new Time
    bool operator==(const Time& other) const; // Equality operator

    int ToSeconds() const; // Convert time to seconds from midnight
    void PrintTime() const; // Print time
};

#endif // TIME_H
