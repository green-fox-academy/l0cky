#include <iostream>

void startingText();

int addArrSize();

void fillArr(int *arr, int arrSize);

void printArr(int *arr, int arrSize);

int *findMax(int *arr, int arrSize);

void endingText(int *maxPointer);

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    startingText();
    int arrSize = addArrSize();

    int arr[arrSize];

    fillArr(arr, arrSize);
    printArr(arr, arrSize);

    int *maxNumPointer = findMax(arr, arrSize);

    endingText(maxNumPointer);

    return 0;
}

void startingText()
{
    std::cout << "Give an intiger how many intigers have the array, than add the intigers." << std::endl;
}

int addArrSize()
{
    int arrSize;
    std::cout << "Add the array size: ";
    std::cin >> arrSize;
    return arrSize;
}

void fillArr(int *arr, int arrSize)
{
    std::cout << "Add the array intigers." << std::endl;

    for (int i = 0; i < arrSize; i++) {
        std::cout << i + 1 << ". number: ";
        std::cin >> arr[i];
    }
}

void printArr(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++) {
        std::cout << i + 1 << ". number: " << arr[i] << std::endl;
    }
}

int *findMax(int *arr, int arrSize)
{
    int *maxNum = &arr[0];
    for (int i = 0; i < arrSize; i++) {
        if (*maxNum < arr[i]) {
            maxNum = &arr[i];
        }
    }
    return maxNum;
}

void endingText(int *maxPointer)
{
    std::cout << "The maximum number: " << *maxPointer << std::endl;
    std::cout << "The maximum number's memory address: " << maxPointer << std::endl;
}