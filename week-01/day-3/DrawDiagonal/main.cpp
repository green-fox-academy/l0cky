#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was
    std::string mySymbol = "%";
    int givenNumber;
    std::cout << "Give a number: ";
    std::cin >> givenNumber;

    // first line
    for (int i = 0; i < givenNumber + 2; i++) {
        std::cout << mySymbol;
    }
    std::cout << "" << std::endl;

    // middle lines
    for (int i = 0; i < givenNumber; i++) {
        std::cout << mySymbol;
        for (int j = 0; j < givenNumber; j++) {
            if (i == j) {
                std::cout << mySymbol;
            } else {
                std::cout << " ";
            }
        }
        std::cout << mySymbol << std::endl;
    }

    // last line
    for (int i = 0; i < givenNumber + 2; i++) {
        std::cout << mySymbol;
    }
    std::cout << "" << std::endl;


    return 0;
}