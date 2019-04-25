//
// Created by l0cky on 2019-04-25.
//

#include <string>
#include <vector>

std::string getApple(std::string name ="apple")
{
    return name;
}

int sum(std::vector<int> apples) {
    int result = 0;
    for (int i = 0; i < apples.size(); ++i) {
       result += apples.at(i);
    }
    return result;
}