#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    int count =0;
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
        if (a[i]<=x) count=count+a[i];
    }
    printf("%d", count);
    return 0;
}