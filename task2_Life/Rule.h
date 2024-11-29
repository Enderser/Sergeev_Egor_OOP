#ifndef RULE_H
#define RULE_H

#include <vector>
#include <string>
using namespace std;

// Rule class defines birth and survival conditions for cells
class Rule {
public:
    vector<int> birthConditions;    // Conditions for a dead cell to be born
    vector<int> survivalConditions; // Conditions for a living cell to survive

    Rule(); // Конструктор по умолчанию
    Rule(const string& ruleString);

    bool shouldBeBorn(int aliveNeighbors) const;
    bool shouldSurvive(int aliveNeighbors) const;
};

#endif // RULE_H
