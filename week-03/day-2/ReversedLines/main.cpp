#include <iostream>
#include <fstream>

void reverseLine(std::string line);

int main()
{
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit);

    try {
        myFile.open("../reversed-lines.txt");

        std::string line;

        while (std::getline(myFile, line)) {
            reverseLine(line);
        }

        myFile.close();

    } catch (std::ifstream::failure &e) {
        std::cout << e.what() << std::endl;
    }


    return 0;
}

void reverseLine(std::string line)
{
    for (std::string::reverse_iterator it = line.rbegin(); it != line.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}
