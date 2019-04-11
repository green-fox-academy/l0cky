#include <iostream>

std::string deleteAllX(std::string);


int main()
{
    std::string text = "xXaaXx";
    std::cout << "This program swap x to y in a string." << std::endl;
    std::cout << "Before swap: " << std::endl;
    std::cout << text << std::endl;
    std::cout << "After swap: " << std::endl;
    std::cout << deleteAllX(text) << std::endl;

    return 0;
}

std::string deleteAllX(std::string text)
{
    if (text.find('x') == std::string::npos)
        return text;
    text.erase(std::find(text.begin(), text.end(), 'x'));
    //text.erase(text.begin() + text.find('x')); same as the above line iterator vs. index
    return deleteAllX(text);
}