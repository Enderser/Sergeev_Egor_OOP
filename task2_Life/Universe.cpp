#include "Universe.h"
#include <fstream>
#include <stdexcept>
#include <iostream>
using namespace std;

// Конструктор с размерами, правилом и именем
Universe::Universe(int width, int height, const Rule& rule, const string& name)
    : width(width), height(height), rule(rule), name(name), generation(0) {
    grid.resize(height, vector<bool>(width, false));
}

// Конструктор, загружающий вселенную из файла
Universe::Universe(const string& fileName) : generation(0), rule() { // rule() вызывает конструктор по умолчанию
    ifstream file(fileName);
    if (!file.is_open()) {
        throw runtime_error("Could not open file: " + fileName);
    }

    string line;
    // Проверка формата файла
    getline(file, line); // Первая строка (формат)
    if (line != "#Life 1.06") {
        throw runtime_error("Unsupported file format: " + line);
    }

    // Имя вселенной
    getline(file, line); // Вторая строка (имя вселенной)
    if (line.substr(0, 3) == "#N ") {
        name = line.substr(3);
    } else {
        name = "Unnamed Universe";
    }

    // Правила перехода
    getline(file, line); // Третья строка (правило)
    if (line.substr(0, 3) == "#R ") {
        rule = Rule(line.substr(3));
    } else {
        throw runtime_error("Invalid or missing rule line");
    }

    // Остальные строки: данные сетки
    vector<vector<bool>> tempGrid;
    while (getline(file, line)) {
        vector<bool> row;
        for (char c : line) {
            if (c == '*') {
                row.push_back(true);
            } else if (c == '.') {
                row.push_back(false);
            }
        }
        if (!row.empty()) {
            tempGrid.push_back(row);
        }
    }

    if (tempGrid.empty()) {
        throw runtime_error("Empty grid data in file");
    }

    grid = tempGrid;
    height = grid.size();
    width = grid[0].size();
}
