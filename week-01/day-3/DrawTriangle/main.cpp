#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    int givenNumber;

    std::cout << "This program print a half triangle." << std::endl;
    std::cout << "Give the number how many lines printed: ";
    std::cin >> givenNumber;

    int i = 0;
    while (i < givenNumber) {
        int j = 0;
        std::string star = "*";
        while (j < i) {
            star += "*";
            j++;
        }
        std::cout << star << std::endl;
        i++;
    }

    return 0;
}