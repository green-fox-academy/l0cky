#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.

int *create_int_array(int *pointer, size_t size);

void print_array(int *pointer, size_t size);

void read_numbers(int *pointer, size_t size);

int sum_of_numbers(int *pointer, size_t size);

int *fill_int_array(int *pointer, size_t size);

int main()
{
    int *pointer = NULL;
    int *pointer2 = NULL;
    size_t size;
    size_t size2;

    printf("Add the int array size: ");
    scanf("%lu", &size);

    pointer = create_int_array(pointer, size);

    read_numbers(pointer, size);

    printf("\nX array: ");
    print_array(pointer, size);

    size2 = sum_of_numbers(pointer, size);

    pointer2 = create_int_array(pointer2, size2);

    pointer2 = fill_int_array(pointer2, size2);

    printf("\nY array: ");
    print_array(pointer2, size2);

    return 0;
}

int *create_int_array(int *pointer, size_t size)
{
    pointer = (int *) calloc(size, sizeof(int));
    return pointer;
}

void print_array(int *pointer, size_t size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d ", pointer[i]);
    }
}

void read_numbers(int *pointer, size_t size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d. number: ", i + 1);
        scanf("%d", &pointer[i]);
    }
}

int sum_of_numbers(int *pointer, size_t size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += pointer[i];
    }
    return sum;
}

int *fill_int_array(int *pointer, size_t size)
{
    for (int i = 0; i < size; ++i) {
        pointer[i] = i + 1;
    }
    return pointer;
}