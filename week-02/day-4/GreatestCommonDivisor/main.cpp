#include <iostream>

int greatestCommonDivisor(int, int);

int main()
{
    int firstNum;
    int secondNum;
    std::cout << "This program find the greatest common divisor of two numbers." << std::endl;
    std::cout << "Number 1: ";
    std::cin >> firstNum;
    std::cout << "Number 2: ";
    std::cin >> secondNum;

    std::cout << "The greatest common divisor " << greatestCommonDivisor(firstNum, secondNum) << std::endl;


    return 0;
}

int greatestCommonDivisor(int firstNum, int secondNum)
{
    if (firstNum < secondNum)
        std::swap(firstNum, secondNum);
    if( firstNum % secondNum == 0)
        return secondNum;
    return greatestCommonDivisor(firstNum, firstNum % secondNum);

}