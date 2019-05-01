#include<iostream>
#include <string>

//  Create a function that takes two strings as a parameter
//  Returns the starting index where the second one is starting in the first one
//  Returns `-1` if the second string is not in the first one

int substring(std::string firstStr, std::string keyword);


int main(int argc, char **argv)
{
    // Example

    // Should print: '17'
    std::cout << substring("this is what I'm searching in", "searching") << std::endl;

    // Should print: '-1'
    std::cout << substring("this is what I'm searching in", "not") << std::endl;
}

int substring(std::string firstStr, std::string keyword)
{
    std::string tempString = "";
    for (int i = 0; i < firstStr.size() - keyword.size(); ++i) {
        tempString = firstStr.substr(i, keyword.size());
        if (tempString == keyword) {
            return i;
        }
    }
    return -1;
}