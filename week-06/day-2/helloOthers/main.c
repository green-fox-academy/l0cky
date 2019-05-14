#include<stdio.h>


int main()
{
    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Esther!
    // Hello, Mary!
    // Hello, Joe!
    char name[5] = "Beno";

    printf("Hello, Viktor!\n");
    printf("Hello, %s!\n", "Gyozo");
    printf("Hello, %s!\n", name);

    return 0;
}