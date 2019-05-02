#include <iostream>
#include <fstream>

void printeOddChars(std::string line);

int main()
{
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit);

    try {
        myFile.open("../duplicated-chars.txt");

        std::string line;

        while (std::getline(myFile, line)) {
            printeOddChars(line);
        }

    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }
    

    return 0;
}

void printeOddChars(std::string line)
{
    for (int i = 0; i < line.size(); ++i) {
        if (i % 2 == 1) {
            std::cout << line.at(i);
        }
    }
    std::cout << std::endl;
}
