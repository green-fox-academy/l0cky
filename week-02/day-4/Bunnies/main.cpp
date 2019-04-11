#include <iostream>

int bunnyEarsCounter(int);

int main()
{
    int bunnies;
    std::cout << "This program counts the bunnies ears." << std::endl;
    std::cout << "Bunnies: ";
    std::cin >> bunnies;

    std::cout << "Ears: " << bunnyEarsCounter(bunnies) << std::endl;

    return 0;
}

int bunnyEarsCounter(int num)
{
    if (num == 1)
        return 2;
    return 2 + bunnyEarsCounter(num - 1);
}
