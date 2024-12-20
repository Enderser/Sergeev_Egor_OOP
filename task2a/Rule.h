#ifndef RULE_H
#define RULE_H

#include <set>
#include <string>

class Rule {
    std::set<int> birthConditions;
    std::set<int> survivalConditions;

public:
    Rule(const std::string& ruleString);
    bool ShouldBeBorn(int aliveNeighbors) const;
    bool ShouldSurvive(int aliveNeighbors) const;
};

#endif // RULE_H
