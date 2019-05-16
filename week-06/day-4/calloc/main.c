#include <stdio.h>
#include <stdlib.h>

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous excersice?

int main()
{
    int *pointer = NULL;
    size_t size = 10;

    pointer = (int *) calloc(sizeof(int), size);

    for (int i = 0; i < size / 2; ++i) {
        pointer[i] = i;
    }

    for (int i = 0; i < size; ++i) {
        printf("%i\n", pointer[i]);
    }

    free(pointer);
    pointer = NULL;

    return 0;
}