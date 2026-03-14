#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int d2nd = n % 10;
    int d1st = n / 10;
    if (d1st == 0 || d2nd == 0) printf("YES");
    else if (d1st % d2nd == 0 || d2nd % d1st == 0) printf("YES");
    else printf("NO");
}