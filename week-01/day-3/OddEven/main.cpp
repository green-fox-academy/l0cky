#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int givenNumber;

    std::cout << "This program decide your given number is odd or even." << std::endl;
    std::cout << "Give a number: ";
    std::cin >> givenNumber;

    if (givenNumber % 2 == 0) {
        std::cout << "Your given number is even." << std::endl;
    } else {
        std::cout << "Your given number is odd." << std::endl;
    }

    return 0;
}