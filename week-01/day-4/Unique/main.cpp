#include <iostream>
#include <string>

void uniqueList(int arr[], int arrSize);

int main(int argc, char *args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int arrSize = sizeof(numbers) / sizeof(numbers[0]);

    //std::cout <<
    uniqueList(numbers, arrSize);
    //<< std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    return 0;
}

void uniqueList(int arr[], int arrSize) {

    for (int i = 0; i < arrSize; i++) {
        int tempNum = arr[i];
        for (int j = i; j < arrSize + 1; j++) {

            if (arr[j + 1] == tempNum) {
                arr[j + 1] = 0;
            }
        }
    }

    for (int i = 0; i < arrSize; i ++) {
        if (arr[i] != 0) {
            std::cout << arr[i] << ", ";
        }
    }
}