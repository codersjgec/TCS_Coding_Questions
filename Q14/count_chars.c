#include <stdio.h>
#include <stdlib.h>

int count(char *z)
{
    int charcount = 0;
    for (int m = 0; z[m]; m++)
        charcount++;
    return charcount;
}

int main(int argc, char *argv[])
{
    int ans;
    char *a = (argv[1]);
    ans = count(a);
    printf("%d\n", ans);
    return 0;
}