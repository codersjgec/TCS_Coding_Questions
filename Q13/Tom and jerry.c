#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int c = argc-1,i=1;
	while(i<=c)
	{
		printf("%c. ",*argv[i++]);
	}
}
