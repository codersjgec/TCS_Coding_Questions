#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n = argc - 1, i;
	for (i = 1; i <= n; i++)
		printf("%c.", argv[i][0]);
	return 0;
}
