#include <stdio.h>
#include "circle.h"

int main()
{
    float radius;

    printf("This program calculate a circle area and circumference.\n");
    printf("Give a radius in float: ");
    scanf("%f", &radius);

    printf("The circle:\n");
    printf("- area: %.2f\n", circle_area(radius));
    printf("- circumference: %.2f", circle_circumference(radius));

    return 0;
}