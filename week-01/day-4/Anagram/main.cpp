#include <iostream>

bool anagram(std::string, std::string);


int main()
{
    std::string firstWord;
    std::string secondWord;

    std::cout << "This program decide that the two given word that they are anagram or not." << std::endl;
    std::cout << "Add the first word: ";
    std::cin >> firstWord;
    std::cout << "Add the second word: ";
    std::cin >> secondWord;

    if (anagram(firstWord, secondWord)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

bool anagram(std::string firstWord, std::string secondWord)
{
    if (firstWord.size() != secondWord.size()) {
        return false;
    }

    std::sort(firstWord.begin(), firstWord.end());
    std::sort(secondWord.begin(), secondWord.end());

    if (firstWord == secondWord) {
        return true;
    }

    return false;
}