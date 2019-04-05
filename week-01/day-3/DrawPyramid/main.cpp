#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was
    int rows;
    std::cout << "This program draw a pyramid." << std::endl;
    std::cout << "Add a number: ";
    std::cin >> rows;


    for (int i = 0; i < rows; i++) {
        for (int j = rows - i - 1; j > 0; j--) {
            std::cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    return 0;
}