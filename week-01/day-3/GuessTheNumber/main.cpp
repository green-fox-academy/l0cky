#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8
    int storedNumber = 8;
    int guessNumber;

    std::cout << "I think a number, please guess it." << std::endl;
    do {
        std::cout << "Number: ";
        std::cin >> guessNumber;
        if ( guessNumber < storedNumber) {
            std::cout << "The stored number is higher." << std::endl;
        } else if (guessNumber > storedNumber) {
            std::cout << "The stored number is lower." << std::endl;
        }
    } while ( guessNumber != storedNumber);

    std::cout << "You found the number: " << storedNumber << std::endl;

    return 0;
}