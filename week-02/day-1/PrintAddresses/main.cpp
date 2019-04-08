#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int arr[5] = {};
    int * arrPointer = arr;

    std::cout << "This program print the memory address of the 5 intiger." << std::endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        std::cout << i + 1 << ". number: ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        std::cout << i + 1 << ". number's memory address is: " << arrPointer + i << std::endl;
    }

    return 0;
}