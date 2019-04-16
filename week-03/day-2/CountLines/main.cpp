#include <iostream>
#include <fstream>
#include <string>

int countFileLines(std::string);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string myFile("../my-file.txt");

    std::cout << countFileLines(myFile) << std::endl;

    return 0;
}

int countFileLines(std::string file)
{
    try {
        std::ifstream countFile;
        countFile.open(file);
        std::string line;
        int iter = 0;

        while (std::getline(countFile, line)) {
            ++iter;
        }
        countFile.close();
        return iter;
    } catch (std::ifstream::failure& e) {
        return 0;
    }
}