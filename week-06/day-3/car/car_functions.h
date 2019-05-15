//
// Created by l0cky on 2019-05-15.
//

#ifndef CAR_CAR_FUNCTIONS_H
#define CAR_CAR_FUNCTIONS_H

enum car_type {
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};

struct car {
    enum car_type type;
    double km;
    double gas;
};

const char *get_car_type(enum car_type car);

struct car create_car(enum car_type, double km, double gas);

void print_car_info(struct car);

#endif //CAR_CAR_FUNCTIONS_H
