#include <stdio.h>
#include <math.h>
int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long double left = (long double)B * logl((long double)A);
    long double right = (long double)D * logl((long double)C);
    if (left > right)
        printf("YES\n");
    else
        printf("NO\n");}
