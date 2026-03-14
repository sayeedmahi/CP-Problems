#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        long long prsum[n+1];
        prsum[0]=0;
        for (int i=0; i<n; i++) {
            prsum[i+1]=prsum[i]+a[i];
        }
        while (q--) {
            long long l, r, k;
            scanf("%lld %lld %lld", &l, &r, &k);
            int sum1=prsum[l-1];
            int sum2=(r-l+1)*k;
            int sum3=prsum[n]-prsum[r];
            int sum=sum1+sum2+sum3; 
            if (sum%2!=0) printf("YES\n");
            else printf("NO\n");
        }
    }
}