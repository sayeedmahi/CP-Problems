#include <stdio.h>
int main () {
    int n, q;
    scanf("%d %d", &n, &q);
    int cows[n];
    int prefix1[n+1];
    int prefix2[n+1];
    int prefix3[n+1];
    prefix1[0]=prefix2[0]=prefix3[0]=0;
    for (int i=0; i<n; i++) {
        scanf("%d", &cows[i]);
        prefix1[i+1]=prefix1[i]+(cows[i]==1? 1: 0);
        prefix2[i+1]=prefix2[i]+(cows[i]==2? 1: 0);
        prefix3[i+1]=prefix3[i]+(cows[i]==3? 1: 0);
    }
    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        int count1= prefix1[r]-prefix1[l-1];
        int count2=prefix2[r]-prefix2[l-1];
        int count3=prefix3[r]-prefix3[l-1];
        printf("%d %d %d\n", count1, count2, count3);
    }
}