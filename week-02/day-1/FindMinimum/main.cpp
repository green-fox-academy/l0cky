#include <iostream>

int *minFunc(int arr[], int arrSize);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    int *minimum = minFunc(numbers, sizeof(numbers) / sizeof(int));

    std::cout << "The minimum value's memory address is " << minimum << std::endl;
    std::cout << "The minimum value is " << *minimum;


    return 0;
}

int * minFunc(int arr[], int arrSize)
{

    int *minNum = &arr[0];
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] < *minNum) {
            minNum = &arr[i];
        }
    }
    return minNum;
}