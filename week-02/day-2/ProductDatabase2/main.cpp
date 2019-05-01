#include <iostream>
#include <map>

void productBelowPrice(std::map<std::string, int> *productDB, int price = 201);

void productMoreThan(std::map<std::string, int> *productDB, int price = 150);

int main()
{
    std::map<std::string, int> productDB{
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apples",  150},
            {"Bread",   50},
            {"Chicken", 550}
    };

    std::cout << "Which products cost less than 201? (just the name)" << std::endl;
    productBelowPrice(&productDB);
    std::cout << std::endl << std::endl;

    std::cout << "Which products cost more than 150? (name + price)" << std::endl;
    productMoreThan(&productDB);

    return 0;
}

void productBelowPrice(std::map<std::string, int> *productDB, int price)
{
    for (auto &it : *productDB) {
        if (it.second < price)
            std::cout << it.first << ", ";
    }
}

void productMoreThan(std::map<std::string, int> *productDB, int price)
{
    for (auto &it : *productDB) {
        if (it.second > price)
            std::cout << it.first << ": " << it.second << std::endl;
    }
}
