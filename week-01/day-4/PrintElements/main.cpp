#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`

    int numbers[] = {4, 5, 6, 7};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}