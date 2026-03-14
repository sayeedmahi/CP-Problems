#include <stdio.h>
int comp(const void* a, const void* b) {
    long long x = *(const long long*)a;
    long long y = *(const long long*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    long long a[n];
    long long b[n];
    for (int i=0; i<n; i++) {
        scanf ("%lld", &a[i]); 
        b[i]=a[i];
    }
    qsort(b, n, sizeof(long long), comp);
    long long psum1[n+1];
    long long psum2[n+1];
    psum1[0]=psum2[0]=0;
    for (int i=0; i<n; i++) {
            psum1[i+1]=psum1[i]+a[i];
            psum2[i+1]=psum2[i]+b[i];
            }
    int m;
    scanf("%d", &m);
    while (m--) {
        int t, l, r;
        scanf("%d %d %d", &t, &l, &r);
        if (t==1) {
            long long ans =psum1[r]-psum1[l-1];
            printf("%lld\n", ans);
        }
        else if(t==2) {
            long long ans =psum2[r]-psum2[l-1];
            printf("%lld\n", ans);
        }
    }
}