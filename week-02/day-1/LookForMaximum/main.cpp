#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int arrSize;
    int *maxNum = nullptr;

    std::cout << "Give an intiger how many intigers have the array, than add the intigers." << std::endl;
    std::cout << "Add the array size: ";
    std::cin >> arrSize;

    int arr[arrSize];
    maxNum = arr;

    std::cout << "Add the array intigers." << std::endl;

    for (int i = 0;i < arrSize; i++) {
        std::cout << i + 1 << ". number: ";
        std::cin >> arr[i];
    }

    for (int i = 0;i < arrSize; i++) {
        std::cout << i + 1 << ". number: " << arr[i] << std::endl;
    }

    for (int i = 0; i < arrSize; i++) {
        if (*maxNum < arr[i]) {
            maxNum = &arr[i];
        }
    }

    std::cout << "The maximum number: " << *maxNum << std::endl;
    std::cout << "The maximum number's memory address: " << maxNum << std::endl;

    return 0;
}