#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class House {
    vector<string> parts;

public:
    void AddPart(const string& part) {
        parts.push_back(part);
    }

    void Show() const {
        cout << "House parts:" << endl;
        for (const auto& part : parts) {
            cout << "- " << part << endl;
        }
    }
};

#endif // HOUSE_H
