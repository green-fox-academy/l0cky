#include <iostream>
#include <vector>

int main() {
    //Create a list ('List A') which contains the following values
    //Apple, Avocado, Blueberries, Durian, Lychee
    std::vector<std::string> listA{"Apple", "Avocado", "Blueberries", "Durian", "Lychee"};


    //Create a new list ('List B') with the values of List A
    std::vector<std::string> listB = listA;


    //Print out whether List A contains Durian or not
    std::string word = "Durian";
    bool containWord = false;
    for (std::vector<std::string>::iterator it = listA.begin(); it != listA.end(); ++it) {
        if (*it == word) {
            containWord = true;
            break;
        }
    }
    if (containWord == true) {
        std::cout << "List A contains " << word << std::endl;
    } else {
        std::cout << "List A does not contain " << word << std::endl;
    }

    //Remove Durian from List B
    for (std::vector<std::string>::iterator it = listB.begin(); it != listB.end(); ++it) {
        if (*it == word) {
            listB.erase(it);
            break;
        }
    }


    //Add Kiwifruit to List A after the 4th element
    listB.push_back("Kiwifruit");


    //Compare the size of List A and List B
    if (listA.size() == listB.size()) {
        std::cout << listA.size() << " " << listB.size() << " List A is bigger." << std::endl;
    } else {
        std::cout << listA.size() << " " << listB.size() << " List B is bigger." << std::endl;
    }

    //Get the index of Avocado from List A
    int indexAvo = -1;
    for (unsigned int i = 0; i < listA.size(); ++i) {
        if (listA.at(i) == "Avocado") {
            indexAvo = i;
        }
    }
    std::cout << "Index of Avocado: " << indexAvo << std::endl;


    //Get the index of Durian from List B
    int indexDur = -1;
    for (unsigned int i = 0; i < listB.size(); ++i) {
        if (listB.at(i) == "Durian") {
            indexDur = i;
        }
    }
    std::cout << "Index of Durian: " << indexDur << std::endl;


    //Add Passion Fruit and Pummelo to List B in a single statement
    std::vector<std::string> addVector{"Passion Fruit", "Pummelo"};
    for (std::vector<std::string>::iterator it = addVector.begin(); it != addVector.end(); ++it) {
        listB.push_back(*it);
    }

    //Print out the 3rd element from List A
    std::cout << listA.at(2) << std::endl;

    return 0;
}