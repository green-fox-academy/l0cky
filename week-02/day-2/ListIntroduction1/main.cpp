#include <iostream>
#include <vector>

int main() {
    //Create an empty list which will contain names (strings)
    std::vector<std::string> myList;

    //Print out the number of elements in the list
    std::cout << myList.size() << std::endl;

    //Add William to the list
    myList.push_back("William");

    //Print out whether the list is empty or not
    if (myList.empty() != 0) {
        std::cout << "Empty" << std::endl;
    } else {
        std::cout << "Not empty" << std::endl;
    }

    //Add John to the list
    myList.push_back("John");

    //Add Amanda to the list
    myList.push_back("Amanda");

    //Print out the number of elements in the list
    std::cout << myList.size() << std::endl;

    //Print out the 3rd element
    std::cout << myList.at(2) << std::endl;

    //Iterate through the list and print out each name
    //  William
    //  John
    //  Amanda
    for (std::vector<std::string>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << std::endl;
    }

    //Iterate through the list and print
    //  1. William
    //  2. John
    //  3. Amanda
    for (unsigned int i = 0; i < myList.size(); ++i) {
        std::cout << i + 1 << ". " << myList.at(i) << std::endl;
    }

    //Remove the 2nd element
    std::vector<std::string>::iterator remIter = myList.begin() + 1;
    myList.erase(remIter);

    //Iterate through the list in a reversed order and print out each name
    //  Amanda
    //  William
    for (std::vector<std::string>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << std::endl;
    }


    //Remove all elements
    myList.clear();


    return 0;
}