#include <stdio.h>
#include <stdlib.h>

int is_old_enough(int age);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;

    printf("Give your age: ");
    scanf("%d", &age);

    printf("You %s buy alcohol in Hungary.", is_old_enough(age) ? "can" : "cannot");

    return 0;
}

int is_old_enough(int age)
{
    return age > 17 ? 1 : 0;
}