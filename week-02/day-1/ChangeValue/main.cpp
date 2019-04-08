#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float *floatPointer;

    floatPointer = &temperature;

    std::cout << "Before the change the 'temprature' value is " << *floatPointer << std::endl;

    *floatPointer = 20.9;

    std::cout << "After the change the 'temprature' value is " << temperature << std::endl;

    return 0;
}