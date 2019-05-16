#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char *concat_strings(char *string1, char *string2);

int main()
{
    char string1[] = "first string";
    char string2[] = "second string";

    char *string_p;

    string_p = concat_strings(string1, string2);

    printf("%s\n%s\n%s\n", string1, string2, string_p);

    free(string_p);
    string_p = NULL;


    return 0;
}

char *concat_strings(char *string1, char *string2)
{
    size_t string1_size = strlen(string1);
    size_t string2_size = strlen(string2);
    size_t result_size = string1_size + string2_size + 1;
    char *result = (char *) calloc(result_size, sizeof(char));

    for (int i = 0; i < string1_size; ++i) {
        result[i] = string1[i];
    }

    for (int j = 0; j < result_size; ++j) {
        result[string1_size + j] = string2[j];
    }

    return result;
}