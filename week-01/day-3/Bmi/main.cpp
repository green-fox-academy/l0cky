#include <iostream>

int main(int argc, char *args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;

    // Print the Body mass index (BMI) based on these values

    std::cout << massInKg / (heightInM * heightInM) << std::endl;

    return 0;
}