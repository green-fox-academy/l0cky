#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot
    int givenNumber;

    std::cout << "Give a number: ";
    std::cin >> givenNumber;

    if (givenNumber == 0 || givenNumber < 0) {
        std::cout << "Not enough" << std::endl;
    } else if (givenNumber == 1) {
        std::cout << "One" << std::endl;
    } else if (givenNumber == 2) {
        std::cout << "Two" << std::endl;
    } else {
        std::cout << "A lot" << std::endl;
    }

    return 0;
}