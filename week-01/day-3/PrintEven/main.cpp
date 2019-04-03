#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // Create a program that prints all the even numbers between 0 and 500
    for (int i = 0; i < 500; i += 2) {
        std::cout << i << std::endl;
    }

    return 0;
}