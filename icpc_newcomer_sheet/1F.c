#include <stdio.h>
int main () {
    long long m, n;
    scanf("%lld %lld", &n, &m);
    long long x = n%10 + m%10;
    printf("%lld", x);

}