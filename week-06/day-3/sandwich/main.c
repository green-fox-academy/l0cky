#include <stdio.h>
#include <string.h>
#include "sandwich.h"

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

int main()
{
    sandwich_t sandwich;

    strcpy(sandwich.name, "Cheese burger");
    sandwich.price = 5.75;
    sandwich.weight = 300;

    int order = 3;
    float pay;
    pay = calculate_order_price(&sandwich, order);

    printf("You bought %d %s, you have to pay %.2f dollar",
           order, sandwich.name, pay);

    return 0;
}