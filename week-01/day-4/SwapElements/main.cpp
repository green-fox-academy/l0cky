#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`
    std::string abc[] = {"first", "second", "third"};

    // test with print before swap
    //for (int i = 0; i < 3; i++) {
    //    std::cout << abc[i] << ", ";
    //}
    //std::cout << std::endl;

    std::string swapElement = abc[0];
    abc[0] = abc[2];
    abc[2] = swapElement;

    // test with print after swap
    //for (int i = 0; i < 3; i++) {
    //    std::cout << abc[i] << ", ";
    //}

    return 0;
}