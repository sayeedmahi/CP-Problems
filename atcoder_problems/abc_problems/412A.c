#include <stdio.h>
int main () {
    int n;
    int a[100], b[100];
    scanf("%d", &n);
    int count=0;
    for (int i=0; i<n; i++) {
        scanf("%d %d", &a[i], &b[i]);
        if (b[i]>a[i]) count++;
    }
    printf("%d\n", count);
}