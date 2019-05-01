#include <iostream>
#include <map>

bool isProductInDB(std::map<std::string, int> *productDB, const std::string &product);

int averagePrice(std::map<std::string, int> *productDB);

int findProductPrice(std::map<std::string, int> *productDB, const std::string &product);

std::string mostExpProduct(std::map<std::string, int> *productDB);

int countBelowPrice(std::map<std::string, int> *productDB, int price = 300);

bool buyFixPrice(std::map<std::string, int> *productDB, int price = 125);

std::string cheapestProduct(std::map<std::string, int> *productDB);

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

    std::cout << "How much is the fish?" << std::endl;
    std::cout << findProductPrice(&productDB, "Fish") << std::endl;
    std::cout << std::endl;

    std::cout << "What is the average price?" << std::endl;
    std::cout << averagePrice(&productDB) << std::endl;
    std::cout << std::endl;

    std::cout << "What is the most expensive product?" << std::endl;
    std::cout << mostExpProduct(&productDB) << std::endl;
    std::cout << std::endl;

    std::cout << "How many products' price is below 300? " << std::endl;
    std::cout << countBelowPrice(&productDB) << std::endl;
    std::cout << std::endl;

    std::cout << "Is there anything we can buy for exactly 125?" << std::endl;
    if (buyFixPrice(&productDB)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "What is the cheapest product?" << std::endl;
    std::cout << cheapestProduct(&productDB) << std::endl;


    return 0;
}

bool isProductInDB(std::map<std::string, int> *productDB, const std::string &product)
{
    return productDB->find(product) != productDB->end();
}

int averagePrice(std::map<std::string, int> *productDB)
{
    int sumPrice = 0;
    for (auto &it : *productDB) {
        sumPrice += it.second;
    }
    return sumPrice / productDB->size();
}

int findProductPrice(std::map<std::string, int> *productDB, const std::string &product)
{
    if (isProductInDB(productDB, product)) {
        return productDB->find(product)->second;
    }
    return 0;
}

std::string mostExpProduct(std::map<std::string, int> *productDB)
{
    int maxPrice = 0;
    std::string maxPProduct;

    for (auto &it : *productDB) {
        if (it.second > maxPrice) {
            maxPrice = it.second;
            maxPProduct = it.first;
        }
    }
    return maxPProduct;
}

int countBelowPrice(std::map<std::string, int> *productDB, int price)
{
    int number = 0;
    for (auto &it : *productDB) {
        if (it.second < price)
            number++;
    }
    return number;
}

bool buyFixPrice(std::map<std::string, int> *productDB, int price)
{
    for (auto &it : *productDB) {
        if (it.second == price)
            return true;
    }
    return false;
}

std::string cheapestProduct(std::map<std::string, int> *productDB)
{
    int lowestPrice = averagePrice(productDB);
    std::string lowestProduct;

    for (auto &it : *productDB) {
        if (it.second < lowestPrice) {
            lowestPrice = it.second;
            lowestProduct = it.first;
        }
    }
    return lowestProduct;
}
