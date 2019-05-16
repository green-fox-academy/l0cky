#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits


int main()
{
    int *pointer;

    pointer = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; ++i) {
        pointer[i] = i;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%i\n", pointer[i]);
    }

    free(pointer);
    pointer = NULL;

    return 0;
}