#include <iostream>

int adder(int num);


int main()
{
    int num;
    std::cout << "This program adds numbers 1 to the given number." << std::endl;
    std::cout << "Number: ";
    std::cin >> num;

    std::cout << "The sum is " << adder(num) << std::endl;

    return 0;
}

int adder(int num)
{
    if (num == 0)
        return 0;

    return num + adder(num - 1);
}