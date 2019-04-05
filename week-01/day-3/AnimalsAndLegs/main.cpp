#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chickens;
    int pigs;

    std::cout << "How many chickens have the farmer: ";
    std::cin >> chickens;
    std::cout << "How many pigs have the farmer: ";
    std::cin >> pigs;
    std::cout << "The animals have " << (2 * chickens) + (4 * pigs) << " legs." << std::endl;

    return 0;
}