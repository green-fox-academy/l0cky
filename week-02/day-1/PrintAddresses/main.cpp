#include <iostream>

void inputNumbers(int *arr, int arrSize);
void printMemAddress(int *arr, int arrSize);

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int arr[5] = {};
    int arrSize = sizeof(arr) / sizeof(int);

    std::cout << "This program print the memory address of the 5 given intiger." << std::endl;

    inputNumbers(arr, arrSize);
    printMemAddress(arr, arrSize);

    return 0;
}
void inputNumbers(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++) {
        std::cout << i + 1 << ". number: ";
        std::cin >> arr[i];
    }
}
void printMemAddress(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++) {
        std::cout << i + 1 << ". number's memory address is: " << arr + i << std::endl;
    }
}