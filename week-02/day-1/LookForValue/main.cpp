#include <iostream>

int returnIndex(int *arr, int arrSize, int number);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1

    int numbers[] = {12, 42, 33};
    int arrSize = sizeof(numbers) / sizeof(int);
    int givenNumber;

    std::cout << "Here is an array: {12, 42, 33}" << std::endl;
    std::cout << "Add a number and return it's index in the array: ";
    std::cin >> givenNumber;

    std::cout << returnIndex(numbers, arrSize, givenNumber);

    return 0;
}

int returnIndex(int *arr, int arrSize, int givenNumber)
{
    int indNum = -1;
    for (int i = 0; i < arrSize; i++) {
        if (givenNumber == arr[i]) {
            indNum = i;
            break;
        }
    }
    return indNum;
}