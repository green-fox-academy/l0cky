#include <iostream>
#include <vector>

int sumSpend(std::vector<int> vec);

int greatestExpense(std::vector<int> vec);

int cheapestExpense(std::vector<int> vec);

float averageSpend(std::vector<int> vec);

int main() {
    //We are going to represent our expenses in a list containing integers.
    //
    //Create a list with the following items.
    //500, 1000, 1250, 175, 800 and 120
    std::vector<int> expense{500, 1000, 1250, 175, 800, 120};

    //Create an application which solves the following problems.
    //How much did we spend?
    std::cout << "Sum:\t\t" << sumSpend(expense) << std::endl;

    //Which was our greatest expense?
    std::cout << "Greatest:\t" << greatestExpense(expense) << std::endl;

    //Which was our cheapest spending?
    std::cout << "Cheapest:\t" << cheapestExpense(expense) << std::endl;

    //What was the average amount of our spendings?
    std::cout << "Average:\t" << averageSpend(expense) << std::endl;

    return 0;
}

int sumSpend(std::vector<int> vec)
{
    int sum = 0;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        sum += *it;
    }

    return sum;
}

int greatestExpense(std::vector<int> vec)
{
    int greatest = vec[0];
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        if (greatest < *it) {
            greatest = *it;
        }
    }

    return greatest;
}

int cheapestExpense(std::vector<int> vec)
{
    int cheapest = vec[0];
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        if (*it < cheapest) {
            cheapest = *it;
        }
    }

    return cheapest;
}

float averageSpend(std::vector<int> vec)
{
    float sum = 0;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        sum += *it;
    }

    return sum / vec.size();
}