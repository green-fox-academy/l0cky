#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int distance;

    std::cout << "This program convert km to miles." << std::endl;
    std::cout << "Please give the distance in km: ";
    std::cin >> distance;
    std::cout << "The given distance in km is " << distance * 0.62137 << " miles." << std::endl;

    return 0;
}