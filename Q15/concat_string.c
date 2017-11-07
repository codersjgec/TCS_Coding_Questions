#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *a = (argv[1]);
    char *b = (argv[2]);
    char *result = malloc(strlen(a) + strlen(b) + 1); //+1 for the null-terminator

    strcpy(result, a);
    strcat(result, b);

    printf("%s\n", result);
    return 0;
}