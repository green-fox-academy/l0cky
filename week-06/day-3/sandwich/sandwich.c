//
// Created by l0cky on 2019-05-15.
//

#include "sandwich.h"

float calculate_order_price(sandwich_t *sandwich, int count)
{
    return count * sandwich->price;
}