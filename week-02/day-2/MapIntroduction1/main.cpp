#include <iostream>
#include <map>

int main() {
    //We are going to play with maps. Feel free to use the built-in methods where possible.
    //Create an empty map where the keys are integers and the values are characters
    std::map<int, char> myMap;

    //Print out whether the map is empty or not
    if (myMap.empty() != 0) {
        std::cout << "Map is empty." << std::endl;
    } else {
        std::cout << "Map is not empty." << std::endl;
    }
    //Add the following key-value pairs to the map
    //Key	Value
    //97	a
    //98	b
    //99	c
    //65	A
    //66	B
    //67	C
    myMap[97] = 'a';
    myMap[98] = 'b';
    myMap.insert(std::make_pair(99, 'c'));
    myMap.insert(std::make_pair(65, 'A'));
    myMap.insert(std::pair<int, char>(66, 'B'));
    myMap.insert(std::pair<int, char>(67, 'C'));

    //Print all the keys
    std::map<int, char>::iterator myIter = myMap.begin();
    for (; myIter != myMap.end(); ++myIter) {
        std::cout << myIter->first << std::endl;
    }

    //Print all the values
    myIter = myMap.begin();
    for (; myIter != myMap.end(); ++myIter) {
        std::cout << myIter->second << std::endl;
    }

    //Add value D with the key 68
    myMap[68] = 'D';

    //Print how many key-value pairs are in the map
    std::cout << myMap.size() << std::endl;

    //Print the value that is associated with key 99
    std::cout << myMap.at(99) << std::endl;

    //Remove the key-value pair where with key 97
    myIter = myMap.begin();
    for (; myIter != myMap.end(); ++myIter) {
        if (myIter->first == 97) {
            myMap.erase(myIter);
        }
    }

    //Print whether there is an associated value with key 100 or not
    if (myMap.count(100) == 0) {
        std::cout << "Not 100 key in the map." << std::endl;
    }
    if (myMap.find(100) == myMap.end()) {
        std::cout << "Not 100 key in the map." << std::endl;
    }

    //Remove all the key-value pairs
    myMap.clear();

    return 0;
}