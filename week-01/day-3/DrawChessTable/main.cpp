#include <iostream>

int main(int argc, char* args[]) {

    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    int chessTableNumber = 8;

    for (int i = 0; i < chessTableNumber; i++) {
        if (i % 2 == 0) {
            std::cout << "% % % % " << std::endl;
        } else {
            std::cout << " % % % %" << std::endl;
        }
    }

    return 0;
}