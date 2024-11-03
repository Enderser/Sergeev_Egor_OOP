#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "ERROR" << '\n';
		return 1;
    }
    cout << "Arg1: " << argv[1] << "\nArg2: " << argv[2] << '\n';
    ifstream in(argv[1]);
    ofstream out(argv[2]);

	string line;
	map<string, double> data;
	int cnt = 0;
	while (getline(in, line)) {
		int st = 0;
		for (int i = 0; i < line.length(); i++){
			if (st == -1 and (isalpha(line[i]) or isdigit(line[i])))
				st = i;
			else if (!isalpha(line[i]) and !isdigit(line[i]) and st != -1) {
				string x = line.substr(st, i - st);
				if (!data.count(x)) 
					data[x] = 1;
				else 
					data[x]++;
				cnt++;
				st = -1;
			}
		}
	}

    vector<pair<string, double>> vec(data.begin(), data.end());
    sort(vec.begin(), vec.end(), [](pair<string, float> a, pair<string, float> b) {
		return a.second > b.second;
		});
	for (const auto& pair : vec) {
		out << pair.first << ';' << pair.second << ';' << pair.second / cnt * 100 << '%' << '\n';
	}
	in.close();
	out.close();
	return 0;
}
