#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int it = 5;
    int givenNumber;
    double sum = 0;

    std::cout << "Please give five number than this program calculate the sum and the average." << std::endl;
    for (int i = 0; i < it; i++) {
        std::cout << i + 1 << ". number: ";
        std::cin >> givenNumber;
        sum += givenNumber;
    }

    std::cout << "Sum: " << sum << ", Average: " << sum / it << std::endl;


    return 0;
}