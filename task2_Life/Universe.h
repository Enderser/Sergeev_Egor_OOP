#ifndef UNIVERSE_H
#define UNIVERSE_H

#include <vector>
#include <string>
#include "Rule.h"
using namespace std;

class Universe {
private:
    vector<vector<bool>> grid; // The game grid (true = alive, false = dead)
    Rule rule;
    string name;
    int width, height;
    int generation; // Current generation count

    int countAliveNeighbors(int x, int y) const;

public:
    Universe(int width, int height, const Rule& rule, const string& name);
    Universe(const string& fileName);

    void loadFromFile(const string& fileName);
    void saveToFile(const string& fileName) const;
    void tick(int n = 1);
    void print() const;
};

#endif // UNIVERSE_H
