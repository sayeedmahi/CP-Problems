#include <stdio.h>
int main () {
    int x, p;
    scanf("%d %d", &x, &p);
    int a = 100-x;
    float org = (float)p * (float)100/a;
    printf("%.2f", org);
}