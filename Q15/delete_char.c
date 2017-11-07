#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeChar(char *str, char garbage)
{
    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++)
    {
        *dst = *src;
        if (*dst != garbage)
            dst++;
    }
    *dst = '\0';
}

int main(int argc, char *argv[])
{
    char *a = argv[1];
    char garbage = argv[2][0];
    removeChar(a, garbage);

    printf("%s\n", a);
    return 0;
}