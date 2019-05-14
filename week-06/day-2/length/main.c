#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_len1(char string[]);

int string_len2(const char string[]);

int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char string[17] = "Create a program";

    printf("The string is '%s'\n", string);
    printf("The string length is %d\n", string_len1(string));
    printf("The string length is %d\n", string_len2(string));

    return 0;
}

int string_len1(char string[])
{
    return strlen(string);
}

int string_len2(const char string[])
{
    int counter = 0;

    while (string[counter] != '\0') {
        counter++;
    }

    return counter;
}