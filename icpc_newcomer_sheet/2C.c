#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[n];
    int evenn=0, oddn=0, posn=0, negn=0;
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i]%2==0) evenn++;
        else oddn++;
        if (a[i]>0) posn++;
        else if (a[i]<0) negn++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", evenn, oddn, posn, negn);
}