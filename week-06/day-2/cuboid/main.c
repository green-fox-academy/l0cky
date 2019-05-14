#include <stdio.h>

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000

int main()
{
    double a, b, c;

    printf("This program calculate a cubioid surface and volume.\n");
    printf("Give the first side: ");
    scanf("%lf", &a);
    printf("Give the second side: ");
    scanf("%lf", &b);
    printf("Give the third side: ");
    scanf("%lf", &c);

    double volume = a * b * c;

    double surface = 2 * (a * b + a * c + b * c);

    printf("The cubioid:\n");
    printf("- surface: %.0lf\n", surface);
    printf("- voulme: %.0lf\n", volume);

    return 0;
}