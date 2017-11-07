#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{ 
    if (a == 0 || b == 0)
       return 0;
       
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(int argc, char* argv[])
{    
    int a, b, ans;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    ans = (a*b)/gcd(a, b);
    printf("%d\n", ans);     
    return 0;
}
