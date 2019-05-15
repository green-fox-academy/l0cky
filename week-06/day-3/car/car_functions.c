//
// Created by l0cky on 2019-05-15.
//
#include <string.h>
#include <stdio.h>
#include "car_functions.h"

const char *get_car_type(enum car_type car)
{
    switch (car) {
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case LAND_ROVER:
            return "Land Rower";
        case TESLA:
            return "Tesla";
    }
}

struct car create_car(enum car_type car_type, double km, double gas)
{
    struct car result;

    result.type = car_type;
    result.km = km;
    result.gas = gas;

    return result;
}

void print_car_info(struct car car)
{
    printf("The car is a %s.\n", get_car_type(car.type));
    printf("It has %.2lf km in it.\n", car.km);
    if (car.type != TESLA) {
        printf("There is %.2lf gas in it.\n\n", car.gas);
    } else {
        printf("This is an electric car, there is no gas in it.\n\n");
    }
}