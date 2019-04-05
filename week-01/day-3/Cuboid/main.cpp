#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000
    double height = 1;
    double length = 2;
    double depth = 3;

    double surfaceArea = 2 * (length * depth + depth * height + height * length);
    double volume = height * length * depth;

    std::cout << "Surface Area: " << surfaceArea << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}