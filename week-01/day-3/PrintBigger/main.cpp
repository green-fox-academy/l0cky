#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one
    int numberOne;
    int numberTwo;

    std::cout << "Give 2 number and this program print which one is bigger." << std::endl;
    std::cout << "First number: ";
    std::cin >> numberOne;
    std::cout << "Second number: ";
    std::cin >> numberTwo;

    if (numberOne < numberTwo) {
        std::cout << numberTwo << " is bigger." << std::endl;
    } else {
        std::cout << numberOne << " is bigger." << std::endl;
    }

    return 0;
}