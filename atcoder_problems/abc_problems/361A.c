#include <stdio.h>
int main () {
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
        for (int i=0; i<k; i++) {
        printf("%d ", a[i]);
    }
    printf("%d ", x);
            for (int i=k; i<n; i++) {
        printf("%d ", a[i]);
    }
}