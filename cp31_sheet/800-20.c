// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[101];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i=0; i<n; i++) {
            printf ("%d ", n+1-a[i]);
        }
        printf ("\n");
    }

    return 0;
}