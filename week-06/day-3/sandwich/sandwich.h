//
// Created by l0cky on 2019-05-15.
//

#ifndef SANDWICH_SANDWICH_H
#define SANDWICH_SANDWICH_H

typedef struct {
    char name[20];
    float price;
    float weight;
} sandwich_t;

float calculate_order_price(sandwich_t *sandwich, int count);

#endif //SANDWICH_SANDWICH_H
