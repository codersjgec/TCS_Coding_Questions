#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
} 

int isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}

int main(int argc, char* argv[]) { 
    int ans;
    int a;
    a = atoi(argv[1]);
    ans = isFibonacci(a);
    if(ans)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}   