#include <iostream>
#include <map>

double sumPay(std::map<std::string, double> *productsPrices, std::map<std::string, int> *sList);

bool isInList(std::map<std::string, int> *sList, const std::string &what);

std::string whoBuysMoreWhat(std::map<std::string, int> *firstList, const std::string &firstName,
                            std::map<std::string, int> *secondList, const std::string &secondName,
                            const std::string &what);

std::string whoBuysMoreDiffProduct(std::map<std::string, int> *firstList, const std::string &firstName,
                                   std::map<std::string, int> *secondList, const std::string &secondName);

int boughtProducts(std::map<std::string, int> *sList);

std::string whoBuysMoreProduct(std::map<std::string, int> *firstList, const std::string &firstName,
                               std::map<std::string, int> *secondList, const std::string &secondName);

int main()
{
    std::map<std::string, double> productPrices{
            {"Milk",            1.07},
            {"Rice",            1.59},
            {"Eggs",            3.14},
            {"Cheese",          12.60},
            {"Chicken Breasts", 9.40},
            {"Apples",          2.31},
            {"Tomato",          2.58},
            {"Potato",          1.75},
            {"Onion",           1.10}
    };

    std::map<std::string, int> bobsList{
            {"Milk",            3},
            {"Rice",            2},
            {"Eggs",            2},
            {"Cheese",          1},
            {"Chicken Breasts", 4},
            {"Apples",          1},
            {"Tomato",          2},
            {"Potato",          1}
    };

    std::map<std::string, int> alicesList{
            {"Rice",            1},
            {"Eggs",            5},
            {"Chicken Breasts", 2},
            {"Apples",          1},
            {"Tomato",          10}
    };

    std::cout << "How much does Bob pay?" << std::endl;
    std::cout << sumPay(&productPrices, &bobsList) << std::endl;
    std::cout << std::endl;

    std::cout << "How much does Alice pay?" << std::endl;
    std::cout << sumPay(&productPrices, &alicesList) << std::endl;
    std::cout << std::endl;

    std::cout << "Who buys more Rice?" << std::endl;
    std::cout << whoBuysMoreWhat(&bobsList, "Bob", &alicesList, "Alice", "Rice") << std::endl;
    std::cout << std::endl;

    std::cout << "Who buys more Potato?" << std::endl;
    std::cout << whoBuysMoreWhat(&bobsList, "Bob", &alicesList, "Alice", "Potato") << std::endl;
    std::cout << std::endl;

    std::cout << "Who buys more different products?" << std::endl;
    std::cout << whoBuysMoreDiffProduct(&bobsList, "Bob", &alicesList, "Alice") << std::endl;
    std::cout << std::endl;

    std::cout << "Who buys more products? (piece)" << std::endl;
    std::cout << whoBuysMoreProduct(&bobsList, "Bob", &alicesList, "Alice") << std::endl;
    std::cout << std::endl;

    return 0;
}

double sumPay(std::map<std::string, double> *productsPrices, std::map<std::string, int> *sList)
{
    double sum = 0;

    for (auto &it : *sList) {
        if (productsPrices->find(it.first) != productsPrices->end()) {
            sum += (productsPrices->find(it.first)->second) * (double) it.second;
        }
    }

    return sum;
}

bool isInList(std::map<std::string, int> *sList, const std::string &what)
{
    return sList->find(what) != sList->end();
}

std::string whoBuysMoreWhat(std::map<std::string, int> *firstList, const std::string &firstName,
                            std::map<std::string, int> *secondList, const std::string &secondName,
                            const std::string &what)
{
    if (!isInList(firstList, what) or !isInList(secondList, what)) {
        if (isInList(firstList, what)) {
            return firstName;
        } else if (isInList(secondList, what)) {
            return secondName;
        } else {
            return "Not included in any of the lists.";
        }
    } else {
        if (firstList->find(what)->second < secondList->find(what)->second) {
            return secondName;
        } else {
            return firstName;
        }
    }
}


std::string whoBuysMoreDiffProduct(std::map<std::string, int> *firstList, const std::string &firstName,
                                   std::map<std::string, int> *secondList, const std::string &secondName)
{
    return firstList->size() > secondList->size() ? firstName : secondName;
}

int boughtProducts(std::map<std::string, int> *sList)
{
    int sum = 0;
    for (auto &it : *sList) {
        sum += it.second;
    }
    return sum;
}

std::string whoBuysMoreProduct(std::map<std::string, int> *firstList, const std::string &firstName,
                               std::map<std::string, int> *secondList, const std::string &secondName)
{
    if (boughtProducts(firstList) < boughtProducts(secondList)) {
        return secondName;
    } else if (boughtProducts(firstList) > boughtProducts(secondList)){
        return firstName;
    } else {
        return "Equal";
    }
}
