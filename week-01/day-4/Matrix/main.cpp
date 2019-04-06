#include <iostream>
#include <string>


int main(int argc, char *args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int dim = 4;
    std::string change = "n";

    std::cout << "You can make a two dimensional matrix the default dimensions is 4x4." << std::endl;
    do {
        std::cout << "Would you like to change it (y/n)? " << std::endl;
        std::cout << "You can write only y (yes) or n (no): ";
        std::cin >> change;
        std::cout << std::endl;
        if (change == "n") {
            break;
        }
    } while (change != "y");

    if (change == "y") {
        std::cout << "Dimension: ";
        std::cin >> dim;
        std::cout << std::endl;
    }

    int twoDimArr[dim][dim];

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            if (i == j) {
                twoDimArr[i][j] = 1;
            } else {
                twoDimArr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            std::cout << twoDimArr[i][j] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}