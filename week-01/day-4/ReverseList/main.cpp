#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`
    int aj[] = {3, 4, 5, 6, 7};
    int ajSize = sizeof(aj) / sizeof(aj[0]);
    int swapArr[ajSize];
    int rev = ajSize;

    for (int i = 0; i < ajSize; i++) {
        swapArr[i] = aj[i];
    }

    for (int i = 0; i < ajSize; i++) {
        rev--;
        aj[i] = swapArr[rev];
    }

    // test with print
    //for (int i = 0; i < ajSize; i++) {
    //    std::cout << aj[i] << ", ";
    //}

    return 0;
}