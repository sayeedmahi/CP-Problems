#include <stdio.h>
int main () {
    int t, x, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &x, &k);
        if (x%k!=0) {
            printf("1\n");
            printf("%d\n", x);
        }
        else {
            printf("2\n");
            printf("%d %d\n", x-1, 1);
        }
    }
}