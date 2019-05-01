#include <iostream>
#include <map>

std::string findTnumberFromName(std::map<std::string, std::string> *tb, const std::string &name);

std::string findNameFromTnumber(std::map<std::string, std::string> *tb, const std::string &number);

bool isNamesPhoneIsIn(std::map<std::string, std::string> *tb, const std::string &name);

int main()
{
    std::map<std::string, std::string> telephoneBook{
            {"William A. Lathan",   "405-709-1865"},
            {"John K. Miller",      "402-247-8568"},
            {"Hortensia E. Foster", "606-481-6467"},
            {"Amanda D. Newland",   "319-243-5613"},
            {"Brooke P. Askew",     "307-687-2982"}
    };


    std::cout << "What is John K. Miller's phone number?" << std::endl;
    std::cout << "The phone number is: " << telephoneBook.find("John K. Miller")->second << std::endl;
    std::cout << "The phone number is: " << findTnumberFromName(&telephoneBook, "John K. Mille") << std::endl;

    std::cout << "Whose phone number is 307-687-2982?" << std::endl;
    std::cout << "The name is: " << findNameFromTnumber(&telephoneBook, "307-687-2982") << std::endl;

    std::cout << "Do we know Chris E. Myers' phone number?" << std::endl;
    if (isNamesPhoneIsIn(&telephoneBook, "Chris E. Myers")) {
        std::cout << "Yes, we know." << std::endl;
    } else {
        std::cout << "No, we don't know." << std::endl;
    }


    return 0;
}

std::string findTnumberFromName(std::map<std::string, std::string> *tb, const std::string &name)
{
    std::string tNumber = tb->find(name)->second;

    if (tNumber.empty()) {
        return "Not found.";
    } else {
        return tNumber;
    }
}

std::string findNameFromTnumber(std::map<std::string, std::string> *tb, const std::string &number)
{

    for (std::map<std::string, std::string>::iterator it = tb->begin(); it != tb->end(); ++it) {
        if (it->second == number) {
            return it->first;
        }
    }

    return "Not found.";
}

bool isNamesPhoneIsIn(std::map<std::string, std::string> *tb, const std::string &name)
{
    return !(tb->find(name)->second).empty();
}
