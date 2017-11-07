#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

static int cmp(const void *p1, const void *p2)
{
    return strcmp(*(char *const *)p1, *(char *const *)p2);
}

int main(int argc, char *argv[])
{
    const char *arr[50];
    for (int i = 1; i <= argc; i++)
        arr[i - 1] = argv[i];
    int arr_size = argc - 1;
    qsort(arr, arr_size, sizeof(char *), cmp);
    for (int i = 0; i < arr_size; i++)
        printf("%s ", arr[i]);
    return 0;
}