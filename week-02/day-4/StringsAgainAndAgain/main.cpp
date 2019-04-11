#include <iostream>

std::string insertStars(std::string);


int main()
{
    std::string text = "xXaaXx";
    std::cout << "This program separate every character with *." << std::endl;
    std::cout << "Before *:\t";
    std::cout << text << std::endl;
    std::cout << "After *:\t";
    std::cout << insertStars(text) << std::endl;

    return 0;
}

std::string insertStars(std::string text)
{
    if (text.begin() + text.rfind('*') + 2 == text.end()) {
        return text;
    }
    if (text.find('*') == std::string::npos)
        text.insert(text.begin() + 1, '*');
    text.insert(text.begin() + text.rfind('*') + 2, '*');
    return insertStars(text);
}