#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was
    int rows;
    std::cout << "This program draw a pyramid." << std::endl;
    std::cout << "Add a number: ";
    std::cin >> rows;

    // Top half
    for (int i = 0; i < rows / 2; i++) {
        for (int j = rows / 2 - i; j > 0; j--) {
            std::cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Middle line
    for (int i = 0; i < rows; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

    // Bottom half
    for (int i = 0; i < rows / 2; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << " ";
        }
        for (int k = rows - 2 - i * 2; k > 0; k--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    return 0;
}