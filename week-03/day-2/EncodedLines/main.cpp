#include <iostream>
#include <fstream>
#include <sstream>

void shiftLetter(const std::string &letter, int shiftNumber);

int main()
{
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit);


    try {
        myFile.open("../encoded-lines.txt");

        std::string line;

        while (std::getline(myFile, line)) {
            shiftLetter(line, -1);
        }

        myFile.close();
    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}

void shiftLetter(const std::string &letter, int shiftNumber)
{
    for (char i : letter) {
        std::cout << (char) (i + shiftNumber);
    }
    std::cout << std::endl;
}
