//
// Created by l0cky on 2019-04-25.
//

#include <string>

bool anagram(std::string firstWord, std::string secondWord)
{
    if (firstWord.size() != secondWord.size()) {
        return false;
    } else {
        std::sort(firstWord.begin(), firstWord.end());
        std::sort(secondWord.begin(), secondWord.end());
        return firstWord == secondWord;
    }


}

