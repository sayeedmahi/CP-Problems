#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int bitop=0;
        for (int i=0; i<n; i++) {
            bitop = (bitop ^ a[i]);
        }
        if (n%2!=0) printf("%d\n", bitop);
        else {
            if (bitop==0) printf("0\n");
            else printf("-1\n");
        }
    }
}