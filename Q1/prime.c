#include <stdio.h>
#include <stdlib.h>

int check_prime(int n)
{
    int i=0, flag=1;
    for(i=2;i<=n/2;i++)     // Can use sqrt(n) instead of n/2 as well
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main(int argc, char* argv[])
{    
    int i, n, ans;
    n = atoi(argv[1]);
    if (n<=1)
        ans=0;
    else
        ans = check_prime(n);
    if(ans)
        printf("True\n");
    else
        printf("False\n");     
    return 0;
}
