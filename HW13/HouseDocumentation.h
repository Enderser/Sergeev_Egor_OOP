#ifndef HOUSE_DOCUMENTATION_H
#define HOUSE_DOCUMENTATION_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class HouseDocumentation {
    vector<string> pages;

public:
    void AddPage(const string& page) {
        pages.push_back(page);
    }

    void Show() const {
        cout << "House Documentation:" << endl;
        for (const auto& page : pages) {
            cout << "- " << page << endl;
        }
    }
};

#endif // HOUSE_DOCUMENTATION_H
