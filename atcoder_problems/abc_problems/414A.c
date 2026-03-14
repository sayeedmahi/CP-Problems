#include <stdio.h>

int main () {
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    int x[100], y[100];
    int count=0;
    for (int i=0; i<n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i]<=l && y[i]>=r) count++;
    }
    printf("%d\n", count);
}