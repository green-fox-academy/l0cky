#include <iostream>
#include <string>

void factorio(int, int&);

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    //test the factorio
    //int factingNum = 3;
    //int factingSum;
    //factorio(factingNum, factingSum);
    //std::cout << factingSum << std::endl;

    return 0;
}

void factorio(int factNumber, int& factSum) {
    factSum = 1;
    for (int i = 1; i <= factNumber; i++) {
        factSum *= i;
    }
}