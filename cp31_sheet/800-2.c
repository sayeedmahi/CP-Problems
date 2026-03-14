#include <stdio.h>
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main () {
    int t, n, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &x);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int b[n+2];
        b[0]=0, b[n+1]=x;
        for (int i=0; i<n; i++) {
            b[i+1]= a[i];
    }
    int maxGap = 0;
    for (int i=0; i<=n; i++) {
        int Gap = b[i+1] - b[i];
        if (Gap>maxGap) maxGap=Gap;
    }
    int lastGap = b[n+1] - b[n];
    if (2*lastGap > maxGap) maxGap = 2* lastGap;
    printf("%d\n", maxGap);
}
}