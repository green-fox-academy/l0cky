#include <iostream>
#include <exception>

double divideByZero(double);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    double givenNumber;

    std::cout << "Give a number and this program divides 10 with it." << std::endl;
    std::cout << "Number: ";
    std::cin >> givenNumber;

    try {
        if (givenNumber == 0) {
            throw 0;
        }
        std::cout << divideByZero(givenNumber) << std::endl;
    } catch (int& e) {
        std::cerr << "fail " << std::endl;
    }

    return 0;
}

double divideByZero(double number)
{
    return number / 10;
}