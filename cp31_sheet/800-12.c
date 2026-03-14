#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int b[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &b[i]);
        }
        int count = 0;
        for (int i=1; i<n; i++) {
            if (b[i] < b[i-1]) {
                count++;
            }
        }
        printf("%d\n", n+count);
        printf("%d ", b[0]);
        for (int i=1; i<n; i++) {
            if (b[i] >= b[i-1]) {
                printf("%d ", b[i]);
            }
            else printf("%d %d ", b[i], b[i]);
        }
        printf("\n");
    }
}