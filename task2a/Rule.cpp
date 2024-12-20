#include "Rule.h"
#include <stdexcept>

Rule::Rule(const std::string& ruleString) {
    if (ruleString.empty() || ruleString[0] != 'B') {
        throw std::invalid_argument("Invalid rule format: " + ruleString);
    }

    size_t slashPos = ruleString.find('/');
    if (slashPos == std::string::npos || ruleString[slashPos + 1] != 'S') {
        throw std::invalid_argument("Invalid rule format: " + ruleString);
    }

    for (size_t i = 1; i < slashPos; ++i) {
        birthConditions.insert(ruleString[i] - '0');
    }

    for (size_t i = slashPos + 2; i < ruleString.size(); ++i) {
        survivalConditions.insert(ruleString[i] - '0');
    }
}

bool Rule::ShouldBeBorn(int aliveNeighbors) const {
    return birthConditions.count(aliveNeighbors);
}

bool Rule::ShouldSurvive(int aliveNeighbors) const {
    return survivalConditions.count(aliveNeighbors);
}
