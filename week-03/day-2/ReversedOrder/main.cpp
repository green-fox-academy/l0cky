#include <iostream>
#include <fstream>
#include <vector>

void printReverseOrder(std::vector<std::string> *vec);

int main()
{
    std::ifstream myFile;
    myFile.exceptions(std::ifstream::badbit);

    std::vector<std::string> reverseOrder;

    try {
        myFile.open("../reversed-order.txt");

        std::string line;

        while (std::getline(myFile, line)) {
            reverseOrder.push_back(line);
        }

        myFile.close();

    } catch (std::ifstream::failure& e) {
        std::cout << e.what() << std::endl;
    }

    printReverseOrder(&reverseOrder);

    return 0;
}

void printReverseOrder(std::vector<std::string> *vec)
{
    for (auto it = vec->rbegin(); it != vec->rend(); ++ it) {
        std::cout << *it <<std::endl;
    }
}
