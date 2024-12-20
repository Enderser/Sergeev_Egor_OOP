#ifndef UNIVERSE_H
#define UNIVERSE_H

#include "Rule.h"
#include <vector>
#include <string>

class Universe {
    std::vector<std::vector<bool>> grid;
    int rows, cols;

public:
    Universe(int rows, int cols);
    void SetCell(int row, int col, bool alive);
    void LoadFromFile(const std::string& filename);
    void SaveToFile(const std::string& filename) const;
    void Display() const;
    void Tick(const Rule& rule);

private:
    int CountAliveNeighbors(int row, int col) const;
};

#endif // UNIVERSE_H
