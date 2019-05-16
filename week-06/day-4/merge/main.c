#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int *create_int_array(int *pointer, size_t size);

int *fill_even_numbers(int *pointer, size_t size);

int *fill_odd_numbers(int *pointer, size_t size);

void print_array(int *pointer, size_t size);

void print_array_descend(int *pointer, size_t size);

int *merge_array(int *pointer, int *pointer2, size_t size);

int main()
{
    int *pointer = NULL;
    int *pointer2 = NULL;
    size_t size = 10;

    pointer = create_int_array(pointer, size);
    pointer2 = create_int_array(pointer2, size);

    fill_even_numbers(pointer, size);
    fill_odd_numbers(pointer2, size);
    
    print_array_descend(merge_array(pointer, pointer2, size), size * 2);

    free(pointer);
    pointer = NULL;

    free(pointer2);
    pointer2 = NULL;


    return 0;
}

int *create_int_array(int *pointer, size_t size)
{
    pointer = (int *) calloc(size, sizeof(int));
    return pointer;
}

int *fill_even_numbers(int *pointer, size_t size)
{
    for (int i = 0; i < size; ++i) {
        pointer[i] = i * 2;
    }

    return pointer;
}

int *fill_odd_numbers(int *pointer, size_t size)
{
    for (int i = 0; i < size; ++i) {
        i == 0 ? pointer[i] = 1 : (pointer[i] = pointer[i - 1] + 2);
    }
    return pointer;
}

void print_array(int *pointer, size_t size)
{
    for (int i = 0; i < size; ++i) {
        printf("%i\n", pointer[i]);
    }
}

void print_array_descend(int *pointer, size_t size)
{
    for (int i = size - 1; i > -1; --i) {
        printf("%i\n", pointer[i]);
    }
}

int *merge_array(int *pointer, int *pointer2, size_t size)
{
    pointer = (int *) realloc(pointer, size * 2);

    for (int i = size; i < size * 2; ++i) {
        pointer[i] = pointer2[i - size];
    }
    return pointer;
}