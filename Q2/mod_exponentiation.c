#include <stdio.h>
#include <stdlib.h>

long bigMod(long  x, long  y, long p) {
    long res = 1;   
    x = x % p; 
    while (y > 0)
    {
       if (y & 1)
           res = (res*x) % p;
        y = y/2;    // Can also be written as y = y >> 1
        x = (x*x) % p;  
    }
    return res;
}

int main(int argc, char* argv[]) { 
    long a = atoi(argv[1]), b =  atoi(argv[2]), c = 1000000007;
    long ans = bigMod(a, b, c);
    printf("%ld\n", ans);
    return 0;
}