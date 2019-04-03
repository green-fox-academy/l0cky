#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5
    int firstNumber;
    int secondNumber;

    std::cout << "Please give the first number: ";
    std::cin >> firstNumber;
    std::cout << "Please give the second number: ";
    std::cin >> secondNumber;

    if (firstNumber > secondNumber) {
        std::cout << "The second number should be bigger" << std::endl;
    } else {
        while (firstNumber < secondNumber) {
            std::cout << firstNumber << std::endl;
            firstNumber++;
        }
    }

    return 0;
}