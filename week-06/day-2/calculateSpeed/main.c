#include <stdio.h>
#define DISTANCE 345

// fix the program so it prints out the correct result!

int main()
{
    int seconds = 17;
    float speed = (float) DISTANCE / seconds;

    printf("%f", speed);

    return 0;
}