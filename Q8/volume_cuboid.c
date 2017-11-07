#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    float a,b,c, ans;
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);
    ans = a*b*c;
    printf("%.2f\n", ans);  //.2f for 2 decimal places
    return 0;
}   