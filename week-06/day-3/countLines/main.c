#include <stdio.h>
#include <string.h>
#include "file_functions.h"

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int main()
{
    char filename[] = "../my-file.txt";

    write_lines_to_file(filename, 10);

    if (!count_lines_in_file(filename)) {
        printf("Cannot open the file.");
    } else {
        printf("The %s has %d line(s).", filename, count_lines_in_file(filename));
    }

    return 0;
}