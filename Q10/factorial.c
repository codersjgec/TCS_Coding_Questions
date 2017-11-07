#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int ans=1;
    for(int i=2;i<=n;i++)
        ans = ans*i;
    return ans;
}

int main(int argc, char* argv[]) {
    int a, ans;
    a = atoi(argv[1]);
    ans = factorial(a);
    printf("%d\n", ans);
    return 0;
}   