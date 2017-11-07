#include <stdio.h>
#include <stdlib.h>

long fib(long n)
{
    long long int a = 0,b = 1,ans=1;
    if (n<2)
        return 0;
    int i = 1;
    while(i < n-1)
    {
        ans = a+b;
        a = b;
        b = ans;
        i++;
    }
    return ans;
}

int main(int argc, char* argv[]) { 
    long ans, a = atoi(argv[1]);
    ans = fib(a);
    printf("%ld\n", ans);
    return 0;
}