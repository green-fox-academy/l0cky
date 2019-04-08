#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *intPointer;
    double *doublePointer;
    std::string *strPointer;

    intPointer = &a;
    doublePointer = &b;
    strPointer = &name;

    std::cout << "The memory address of 'a' is " << intPointer << ", the value is " << *intPointer << std::endl;
    std::cout << "The memory address of 'b' is " << doublePointer << ", the value is " << *doublePointer << std::endl;
    std::cout << "The memory address of 'name' is " << strPointer << ", the value is " << *strPointer << std::endl;

    return 0;
}