#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int* pointer = NULL;
    size_t size = 10;

    pointer = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; ++i) {
        pointer[i] = i * 2;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%i\n", pointer[i]);
    }

    free(pointer);
    pointer = NULL;

    return 0;
}