#include "Game.h"
#include <iostream>

Game::Game(const string& inputFile) : universe(inputFile) {}

void Game::startInteractive() {
    string command;
    cout << "Welcome to Conway's Game of Life. Type 'help' for commands.\n";
    while (true) {
        cout << "> ";
        getline(cin, command);
        if (command == "exit") break;
        executeCommand(command);
    }
}

void Game::executeCommand(const string& command) {
    if (command == "help") {
        cout << "Available commands:\n"
             << "dump <filename> - Save universe to file\n"
             << "tick <n=1> - Advance n generations and print result\n"
             << "exit - Quit the game\n";
    } else if (command.find("dump") == 0) {
        string filename = command.substr(5);
        universe.saveToFile(filename);
    } else if (command.find("tick") == 0) {
        int iterations = stoi(command.substr(5));
        universe.tick(iterations);
        universe.print();
    } else {
        cout << "Unknown command. Type 'help' for a list of commands.\n";
    }
}

void Game::offlineMode(int iterations, const string& outputFile) {
    universe.tick(iterations);
    universe.saveToFile(outputFile);
}
