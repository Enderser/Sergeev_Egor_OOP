#include "Universe.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>

Universe::Universe(int rows, int cols) : rows(rows), cols(cols) {
    grid.resize(rows, std::vector<bool>(cols, false));
}

void Universe::SetCell(int row, int col, bool alive) {
    grid[row][col] = alive;
}

void Universe::LoadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filename);
    }

    std::string line;
    std::getline(file, line);
    if (line != "#Life 1.06") {
        throw std::runtime_error("Invalid file format: " + filename);
    }

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        int row, col;
        if (iss >> row >> col) {
            if (row >= 0 && row < rows && col >= 0 && col < cols) {
                SetCell(row, col, true);
            }
        }
    }
}

void Universe::SaveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (!file) {
        throw std::runtime_error("Failed to open file for writing: " + filename);
    }

    file << "#Life 1.06\n";
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c]) {
                file << r << " " << c << '\n';
            }
        }
    }
}

void Universe::Display() const {
    for (const auto& row : grid) {
        for (bool cell : row) {
            std::cout << (cell ? 'O' : '.') << ' ';
        }
        std::cout << '\n';
    }
}

void Universe::Tick(const Rule& rule) {
    std::vector<std::vector<bool>> newGrid(rows, std::vector<bool>(cols, false));

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            int aliveNeighbors = CountAliveNeighbors(r, c);
            if (grid[r][c]) {
                newGrid[r][c] = rule.ShouldSurvive(aliveNeighbors);
            } else {
                newGrid[r][c] = rule.ShouldBeBorn(aliveNeighbors);
            }
        }
    }

    grid = std::move(newGrid);
}

int Universe::CountAliveNeighbors(int row, int col) const {
    int count = 0;
    for (int dr = -1; dr <= 1; ++dr) {
        for (int dc = -1; dc <= 1; ++dc) {
            if (dr == 0 && dc == 0) continue;
            int r = (row + dr + rows) % rows;
            int c = (col + dc + cols) % cols;
            count += grid[r][c];
        }
    }
    return count;
}
