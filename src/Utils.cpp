#include "../include/Utils.h"
#include <iostream>
#include <limits>

using std::cout;
using std::cin;


namespace Utils {
    int getMenuChoice(int min, int max) {
        int choice;
        while (true) {
            cout << "Enter choice (" << min << "-" << max << "): ";
            cin >> choice;
            if (cin.fail() || choice < min || choice > max) {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid choice. Try again.\n";
            } else {
                break;
            }
        }
        return choice;
    }

    void clearScreen() {
            system("cls");
    }

    void pause() {
        std::cout << "Press Enter to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    }
}
