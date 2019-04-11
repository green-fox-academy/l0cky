#include <iostream>

int bunniesEars(int);

int main()
{
    int bunnies;
    std::cout << "Bunnies: ";
    std::cin >> bunnies;

    std::cout << "Ears: " << bunniesEars(bunnies) << std::endl;

    return 0;
}

int bunniesEars(int num)
{
    if (num == 1)
        return 3;
    if (num % 2 == 0)
        return 2 + bunniesEars(num - 1);
    if ( num % 3 == 0)
        return 3 + bunniesEars(num - 1);
}