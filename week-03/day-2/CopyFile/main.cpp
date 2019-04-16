#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyFile(std::string, std::string);

int main() {

    std::string readFromFile("../read.txt");
    std::string copyToFile("../copy.txt");

    if (copyFile(readFromFile, copyToFile)) {
        std::cout << "Copy work." << std::endl;
    } else {
        std::cout << "Copy not work." << std::endl;
    }


    return 0;
}

bool copyFile(std::string readFromFile, std::string writeToFile)
{
    std::ifstream readStream;
    std::ofstream copyStream;
    std::string line;
    copyStream.exceptions(std::ofstream::failbit | std::ofstream::badbit);

    try {
        readStream.open(readFromFile);
        copyStream.open(writeToFile);

        while (getline(readStream, line)) {
            copyStream << line << std::endl;
        }
        readStream.close();
        copyStream.close();
        return true;
    } catch (...) {
        return false;
    }
}