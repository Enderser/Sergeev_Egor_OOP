#include "Rule.h"
#include <algorithm>

// Конструктор по умолчанию: классическое правило "B3/S23"
Rule::Rule() {
    birthConditions = {3};          // Рождение: ровно 3 соседа
    survivalConditions = {2, 3};    // Выживание: 2 или 3 соседа
}

// Конструктор с заданным правилом
Rule::Rule(const string& ruleString) {
    size_t bPos = ruleString.find('B');
    size_t sPos = ruleString.find('S');

    if (bPos != string::npos) {
        for (char c : ruleString.substr(bPos + 1, sPos - bPos - 1)) {
            birthConditions.push_back(c - '0');
        }
    }

    if (sPos != string::npos) {
        for (char c : ruleString.substr(sPos + 1)) {
            survivalConditions.push_back(c - '0');
        }
    }
}

bool Rule::shouldBeBorn(int aliveNeighbors) const {
    return find(birthConditions.begin(), birthConditions.end(), aliveNeighbors) != birthConditions.end();
}

bool Rule::shouldSurvive(int aliveNeighbors) const {
    return find(survivalConditions.begin(), survivalConditions.end(), aliveNeighbors) != survivalConditions.end();
}
