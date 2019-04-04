#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create an array variable named `t`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element

    int t[] = {1, 2, 3, 4, 5};

    t[2]++;

    std::cout << t[2] << std::endl;

    return 0;
}