#include <iostream>

std::string swapXY(std::string);



int main()
{
    std::string text = "xXaaXx";
    std::cout << "This program swap x to y in a string." << std::endl;
    std::cout << "Before swap: " << std::endl;
    std::cout << text << std::endl;
    std::cout << "After swap: " << std::endl;
    std:: cout << swapXY(text) << std::endl;

    return 0;
}

std::string swapXY(std::string text)
{
    if (text.find('x') == std::string::npos)
        return text;
    text[text.find('x')] = 'y';
    return swapXY(text);
}