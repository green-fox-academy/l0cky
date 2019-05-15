//
// Created by l0cky on 2019-05-15.
//
#include <stdio.h>
#include "file_functions.h"

void write_lines_to_file(char *filename, int line)
{
    FILE *file_p;
    file_p = fopen(filename, "w");

    for (int i = 0; i < 10; ++i) {
        fprintf(file_p, "%d. line\n", i);
    }

    fclose(file_p);
}

int count_lines_in_file(char *filename)
{
    FILE *file_p;
    file_p = fopen(filename, "r");

    int counter = 0;
    size_t len;

    if (file_p == NULL) {
        return 0;
    }

    while (fgetln(file_p, &len)) {
        counter++;
    }

    fclose(file_p);

    return counter;
}