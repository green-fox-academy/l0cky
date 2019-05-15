#include <stdio.h>
#include "car_functions.h"

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main()
{
    struct car volvo = create_car(VOLVO, 200000, 80);
    struct car tesla = create_car(TESLA, 15000, 0);
    struct car toyota = create_car(TOYOTA, 134000, 75);
    struct car land = create_car(LAND_ROVER, 452000, 120);

    print_car_info(volvo);
    print_car_info(tesla);
    print_car_info(toyota);
    print_car_info(land);


    return 0;
}