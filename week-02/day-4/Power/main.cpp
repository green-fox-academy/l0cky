#include <iostream>

unsigned int powerN(unsigned int base = 1, unsigned int pow = 1);

int main()
{
    unsigned int base = 1;
    unsigned int pow = 1;

    std::cout << "This program calculate a number to the n power." << std::endl;
    std::cout << "Number: ";
    std::cin >> base;
    std::cout << "Power: ";
    std::cin >> pow;

    std::cout << "The value is " << powerN(base, pow) << std::endl;

    return 0;
}

unsigned int powerN(unsigned int base, unsigned int pow)
{
    if (pow == 0)
        return 1;
    return base * powerN(base, pow - 1);
}