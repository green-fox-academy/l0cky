#include <iostream>

void *swapNum(int *pointerA, int *pointerB);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    int *intPointerA = &a;
    int *intPointerB = &b;

    std::cout << "Before swap:" << std::endl;
    std::cout << "a " << a << std::endl;
    std::cout << "b " << b << std::endl;
    swapNum(intPointerA, intPointerB);
    std::cout << "After swap:" << std::endl;
    std::cout << "a " << a << std::endl;
    std::cout << "b " << b << std::endl;

    return 0;
}
void *swapNum(int *a, int *b)
{
    int number = *a;
    *a = *b;
    *b = number;
}