#include <stdio.h>
int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    int found = 0;
    if ((a + b - c == d) || (a - b + c == d) || (a + (b - c) == d) || ((a - b) + c == d)) found = 1;
    if ((a + b * c == d) || (a * b + c == d) || (a + (b * c) == d) || ((a * b) + c == d)) found = 1;
    if ((a - b * c == d) || (a * b - c == d) || (a - (b * c) == d) || ((a * b) - c == d)) found = 1;
    if (found) printf("YES\n");
    else printf("NO\n");
}
