#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22
    int added = 13 + 22;
    printf("%d\n", added);

    // Print the result of 13 substracted from 22
    int substracted = 13 - 22;
    printf("%d\n", substracted);

    // Print the result of 22 multiplied by 13
    int multiplied = 13 * 22;
    printf("%d\n", multiplied);

    // Print the result of 22 divided by 13 (as a decimal fraction)
    float fraction = (float) 22 / (float) 13;
    printf("%f\n", fraction);

    // Print the reminder of 22 divided by 13
    int reminder = 22 % 13;
    printf("%d\n", reminder);

    // Store the results in variables and use them when you display the result

    return 0;
}