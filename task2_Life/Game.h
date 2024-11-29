#ifndef GAME_H
#define GAME_H

#include "Universe.h"
using namespace std;

class Game {
private:
    Universe universe;

public:
    Game(const string& inputFile);
    void startInteractive();
    void executeCommand(const string& command);
    void offlineMode(int iterations, const string& outputFile);
};

#endif // GAME_H
