#include <iostream>
#include <string>
#include <vector>

bool isPalindrome(std::string word);

void searchPalindrome(std::vector<std::string> *vec, std::string word);

void printPalindromeVec(std::vector<std::string> *vec);


int main()
{
    std::string word = "dog goat dad duck doodle never";
    std::vector<std::string> vec;
    searchPalindrome(&vec, word);
    std::vector<std::string> vec2{"og go", "g g", " dad ", "dad", "d d", "dood", "eve"};

    printPalindromeVec(&vec);
    printPalindromeVec(&vec2);

    return 0;
}

bool isPalindrome(std::string word)
{
    std::string reverseWord = "";
    for (int i = 0; i < word.size(); ++i) {
        reverseWord.insert(0, 1, word.at(i));
    }

    if (word == reverseWord) {
        return true;
    } else {
        return false;
    }
}

void searchPalindrome(std::vector<std::string> *vec, std::string word)
{
    int minPalindromeLenght = 3;
    for (int j = 0; j < word.size() - minPalindromeLenght; ++j) {
        std::string tempSubString = word.substr(j, word.size());
        for (int i = 0; i < tempSubString.size() - minPalindromeLenght; ++i) {
            std::string tempWord = tempSubString.substr(0, minPalindromeLenght + i);
            if (isPalindrome(tempWord)) {
                vec->push_back(tempWord);
            }
        }
    }
}

void printPalindromeVec(std::vector<std::string> *vec)
{
    std::string temp = "";
    temp += "[";

    for (int i = 0; i < vec->size(); ++i) {
        temp += "\"" + vec->at(i) + "\", ";
    }
    temp.pop_back();
    temp.pop_back();
    temp += "]";

    std::cout << temp << std::endl;
}