#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
        }
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[102];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }

        qsort (a, n, sizeof(int), cmp);
        int min = a[0];
        int idx=0;
        while (idx<n && a[idx]==min)  {
            idx++;
        }
        if (idx == n) {
            printf("-1\n");
            continue;       
    }
        printf("%d %d\n", idx, n-idx);
        for (int i=0; i<idx; i++) {
            printf("%d", a[i]);
            if (i!=idx-1) printf(" ");
        }
        printf("\n");
        for (int i=idx; i<n;i++) {
            printf("%d", a[i]);
            if (i!=n-1) printf(" ");
        }
        printf("\n");
}
}