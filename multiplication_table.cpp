#include <iostream>
#include <iomanip>

int main() {
    const int tableSize = 12;

    // Print the table header
    std::cout << "Multiplication Table (1 to " << tableSize << ")\n\n";
    std::cout << "   |";
    for (int i = 1; i <= tableSize; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n---+";
    for (int i = 1; i <= tableSize; ++i) {
        std::cout << "----";
    }
    std::cout << "\n";

    // Print the multiplication table
    for (int i = 1; i <= tableSize; ++i) {
        std::cout << std::setw(2) << i << " |";
        for (int j = 1; j <= tableSize; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << "\n";
    }

    return 0;
}