#include <iostream>

unsigned int sumDigits(unsigned int num);

int main()
{
    unsigned int num;
    std::cout << "This program adds numbers 1 to the given number." << std::endl;
    std::cout << "Number: ";
    std::cin >> num;
    
    std::cout << "The sum is " << sumDigits(num) << std::endl;

    return 0;
}

unsigned int sumDigits(unsigned int num)
{
    if (num <= 9)
        return num;
    return (num % 10) + sumDigits(num / 10);
}