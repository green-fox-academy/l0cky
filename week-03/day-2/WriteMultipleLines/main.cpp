#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

void writeMultipleLines(std::string, std::string, int);

int main() {

    std::string myFilePath("../my-file.txt");
    std::string word("apple");
    int lineNumber = 5;

    writeMultipleLines(myFilePath, word, lineNumber);

    return 0;
}

void writeMultipleLines(std::string path, std::string word, int number)
{
    std::ofstream fileStream;
    fileStream.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        fileStream.open(path);
        std::istringstream line;
        for (int i = 0; i < number; ++i) {
            fileStream << word;
            if (i < number - 1) {
                fileStream << std::endl;
            }
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

}