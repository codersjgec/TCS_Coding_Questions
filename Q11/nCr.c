#include <stdio.h>
#include <stdlib.h>

long long C(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main(int argc, char* argv[]) {
    long long int n, r, ans;
    n = atoi(argv[1]);
    r = atoi(argv[2]);
    ans = C(n, r);
    printf("%lld\n", ans);
    return 0;
}   