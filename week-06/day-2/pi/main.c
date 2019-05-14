#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

float circle_area(int radius);



int main()
{
    int radius;

    printf("Add a radius in intiger: ");
    scanf("%d", &radius);
    printf("Area: %.2f", circle_area(radius));

    return 0;
}

float circle_area(int radius)
{
    return (float) radius * (float) radius * PI;
}