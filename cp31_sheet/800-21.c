
#include <stdio.h>
#include <stdlib.h>

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
        int count[n];
        if (a[0]==0) count[0]=1;
        else count[0]=0;
        for (int i=1; i<n; i++) {
            if (a[i]==1) count[i]=0;
            else if (a[i]==0) count[i]=count[i-1]+1;
        }
        int max=count[0];
        for (int i=1; i<n; i++) {
            if (count[i] > max) max=count[i];
        }
        printf("%d\n", max);
    }
}