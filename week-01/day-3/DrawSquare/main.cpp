#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the number was
    int squareLenght;

    std::cout << "This program draw a square." << std::endl;
    std::cout << "Add the number: ";
    std::cin >> squareLenght;

    for (int i = 0; i < squareLenght; i++) {
        if (i == 0 || i == squareLenght - 1) {
            for (int j = 0; j < squareLenght; j++) {
                std::cout << "%";
            }
            std::cout << std::endl;
        } else {
            std::cout << "%";
            for (int k = 0; k < squareLenght - 2; k++) {
                std::cout << " ";
            }
            std::cout << "%" << std::endl;
        }
    }


    return 0;
}