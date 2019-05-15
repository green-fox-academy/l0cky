#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, for that you may use C-programming, although it is not mandatory

int main()
{
    FILE *file_p;
    file_p = fopen("../my-file.txt", "w");

    for (int i = 0; i < 10; ++i) {
        fprintf(file_p, "%d. line\n", i);
    }

    fclose(file_p);

    file_p = fopen("../my-file.txt", "r");

    char buffer[20];
    while (fgets(buffer, 20, file_p)) {
        fprintf(stdout, "%s", buffer);
    }

    fclose(file_p);

    return 0;
}