#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4
    int givenNumber;
    double sum = 0;
    int it = 1;

    std::cout << "This program calculate the sum and the average of the given number." << std::endl;
    std::cout << "Please give the numbers to stop anz character." << std::endl;

    std::cout << it << ". number: ";
    it++;
    while (std::cin >> givenNumber) {
        std::cout << it << ". number: ";
        sum += givenNumber;
        it++;
    }
    std::cout << "Sum: " << sum << ", " << "Average: " << sum / (it -2) << std::endl;

    return 0;
}