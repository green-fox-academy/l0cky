#include <iostream>
#include "Sharpie.h"

int main()
{
    Sharpie sh("red", 12);

    std::cout << "Sharpie:" << std::endl;
    std::cout << "Color:\t\t" << sh.getColor() << std::endl;
    std::cout << "Width:\t\t" << sh.getWidth() << std::endl;
    std::cout << "Ink amount:\t" << sh.getInkAmount() << std::endl;
    std::cout << std::endl;

    sh.use();
    sh.use(10);
    std::cout << "Sharpie:" << std::endl;
    std::cout << "Color:\t\t" << sh.getColor() << std::endl;
    std::cout << "Width:\t\t" << sh.getWidth() << std::endl;
    std::cout << "Ink amount:\t" << sh.getInkAmount() << std::endl;

    return 0;
}