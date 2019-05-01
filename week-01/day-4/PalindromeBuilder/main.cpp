#include <iostream>

std::string createPalindrome(std::string word);


int main()
{
    std::string word = "greenfox";

    std::cout << createPalindrome(word) << std::endl;
    return 0;
}

std::string createPalindrome(std::string word)
{
    std::string reverseWord = "";
    for (int i = 0; i < word.size(); ++i) {
        reverseWord.insert(0, 1, word.at(i));
    }

    return word + reverseWord;
}