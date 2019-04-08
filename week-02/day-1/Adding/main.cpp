#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int *aPointer = &a;
    int *bPointer = &b;

    std::cout << "The sum of 'a' and 'b' is " << *aPointer + *bPointer << std::endl;

    return 0;
}