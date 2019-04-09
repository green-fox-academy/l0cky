#include <iostream>
#include <map>

int main() {
    //Create a map where the keys are strings and the values are strings with the following initial values
    //Key	Value
    //978-1-60309-452-8	A Letter to Jo
    //978-1-60309-459-7	Lupus
    //978-1-60309-444-3	Red Panda and Moon Bear
    //978-1-60309-461-0	The Lab
    std::map<std::string, std::string> isbnMap{{"978-1-60309-452-8", "A Letter to Jo"},
                                               {"978-1-60309-459-7", "Lupus"},
                                               {"978-1-60309-444-3", "Red Panda and Moon Bear"},
                                               {"978-1-60309-461-0", "The Lab"}};

    //Print all the key-value pairs in the following format
    //A Letter to Jo (ISBN: 978-1-60309-452-8)
    //Lupus (ISBN: 978-1-60309-459-7)
    //Red Panda and Moon Bear (ISBN: 978-1-60309-444-3)
    //The Lab (ISBN: 978-1-60309-461-0)
    for (std::map<std::string, std::string>::iterator it = isbnMap.begin(); it != isbnMap.end(); ++it) {
        std::cout << it->second << " (ISBN: " << it-> first << ")" << std::endl;
    }

    //Remove the key-value pair with key 978-1-60309-444-3
    isbnMap.erase("978-1-60309-444-3");

    //Remove the key-value pair with value The Lab
    for (std::map<std::string, std::string>::iterator it = isbnMap.begin(); it != isbnMap.end(); ++it) {
        if (it->second == "The Lab") {
            isbnMap.erase(it->first);
            break;
        }
    }



    //Add the following key-value pairs to the map
    //Key	Value
    //978-1-60309-450-4	They Called Us Enemy
    //978-1-60309-453-5	Why Did We Trust Him?
    isbnMap["978-1-60309-450-4"] = "They Called Us Enemy";
    isbnMap["978-1-60309-453-5"] = "Why Did We Trust Him?";

    //Print whether there is an associated value with key 478-0-61159-424-8 or not
    std::string searchISBN("478-0-61159-424-8");
    if (isbnMap.count(searchISBN) != 0) {
        std::cout << "Found " << searchISBN << " key." << std::endl;
    } else {
        std::cout << "Not found " << searchISBN << " key." << std::endl;
    }

    //Print the value associated with key 978-1-60309-453-5
    std::cout << isbnMap["978-1-60309-453-5"] << std::endl;

    return 0;
}