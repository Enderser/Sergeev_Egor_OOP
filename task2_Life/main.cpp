#include "Game.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 2) { // Interactive mode
        Game game(argv[1]);
        game.startInteractive();
    } else if (argc >= 5) { // Offline mode
        string inputFile, outputFile;
        int iterations = 1;

        for (int i = 1; i < argc; ++i) {
            string arg = argv[i];
            if (arg == "-i" || arg == "--iterations") {
                iterations = stoi(argv[++i]);
            } else if (arg == "-o" || arg == "--output") {
                outputFile = argv[++i];
            } else {
                inputFile = arg;
            }
        }

        Game game(inputFile);
        game.offlineMode(iterations, outputFile);
    } else {
        cout << "Usage:\n"
             << "  " << argv[0] << " <input_file> (interactive mode)\n"
             << "  " << argv[0] << " <input_file> -i <iterations> -o <output_file> (offline mode)\n";
    }

    return 0;
}
