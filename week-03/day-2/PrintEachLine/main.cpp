#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

    try {
        myFile.open("../my-file.txt");

        std::string line;
        while (!myFile.eof()) {
            getline(myFile, line);
            std::cout << line << std::endl;
        }
        myFile.close();
    } catch (std::ifstream::failure &e) {
        std::cerr << e.what() << std::endl;
    }


    return 0;
}