#include <iostream>
#include <string>

int sum(int);

int main(int argc, char *args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    // test the sum function
    //int number = 3;
    //std::cout << sum(number) << std::endl;

    return 0;
}

int sum(int number) {
    int tempSum;
    for (int i = 0; i <= number; i++) {
        tempSum += i;
    }
    return tempSum;
}