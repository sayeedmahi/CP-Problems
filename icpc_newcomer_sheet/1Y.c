#include <stdio.h>
int main () {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long result = result * (a%100) * (b%100) % 100;
    result  = result * (c%100) %100;
    result = result * (d%100) %100;
    printf("%02lld", result);
}