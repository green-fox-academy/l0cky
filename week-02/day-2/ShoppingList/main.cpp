#include <iostream>
#include <vector>

bool isItemInList(std::vector<std::string> *sList, const std::string& item);

int main()
{
    std::vector<std::string> sList {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    std::cout << "Do we have milk on the list? ";
    if (isItemInList(&sList, "milk")) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    std::cout << "Do we have bananas on the list? ";
    if (isItemInList(&sList, "bananas")) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}

bool isItemInList(std::vector<std::string> *sList, const std::string& item)
{
    return !std::find(sList->begin(), sList->end(), item)->empty();
}
