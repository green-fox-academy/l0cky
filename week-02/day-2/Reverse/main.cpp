#include <iostream>
#include <string>

std::string reverse(const std::string& text)
{
    std::string reverseWord;
    for (unsigned int i = text.size(); i > 0; --i) {
        reverseWord += text.at(i-1);
    }
    return reverseWord;
}

int main(int argc, char* args[])
{
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    std::cout << reverse(reversed) << std::endl;

    return 0;
}