#include "Universe.h"
#include "Rule.h"
#include <iostream>
#include <string>

void PrintHelp() {
    std::cout << "Commands:\n";
    std::cout << "  tick <n>       - Advance n generations.\n";
    std::cout << "  dump <file>    - Save current state to file.\n";
    std::cout << "  exit           - Quit the program.\n";
}

int main(int argc, char* argv[]) {
    std::string inputFile = "input.txt"; // Файл по умолчанию
    if (argc > 1) {
        inputFile = argv[1]; // Если передан аргумент, используем его как имя файла
    }

    Universe universe(20, 20);
    Rule rule("B3/S23");

    try {
        universe.LoadFromFile(inputFile);
        std::cout << "Loaded universe from " << inputFile << "\n\n";
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\nUsing default empty universe.\n";
    }

    universe.Display();

    std::string command;
    while (true) {
        std::cout << "> ";
        std::cin >> command;

        if (command == "tick") {
            int n;
            std::cin >> n;
            for (int i = 0; i < n; ++i) {
                universe.Tick(rule);
                std::cout << '\n';
                universe.Display();
            }
        } else if (command == "dump") {
            std::string filename;
            std::cin >> filename;
            universe.SaveToFile(filename);
        } else if (command == "help") {
            PrintHelp();
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Unknown command. Type 'help' for a list of commands.\n";
        }
    }

    return 0;
}
