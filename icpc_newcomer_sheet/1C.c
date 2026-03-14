#include <stdio.h>
int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);
    long long sum = x + y;
    long long mul = x * y;
    long long subs = x - y;
    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mul);
    printf("%lld - %lld = %lld\n", x, y, subs);
}
