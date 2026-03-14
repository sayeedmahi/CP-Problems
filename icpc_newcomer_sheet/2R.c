#include <stdio.h>
int main () {
    int n, m;
    while (1) {
        scanf("%d %d", &n, &m);
        if (n<=0 || m<=0) {
            break;
        }
        int sum=0;
        if (n>m) {
            for (int i=m; i<=n; i++) {
                sum=sum+i;
                printf("%d ", i);
            }
        }
        else {
            for (int i=n; i<=m; i++) {
                sum=sum+i;
                printf("%d ", i);
            }
        }
        printf("sum =%d\n", sum);
    }

}