#include <stdio.h>
int main () {
    int n, q;
    scanf("%d %d", &n, &q);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int psum[n+1];
    psum[0]=0;
    for (int i=0; i<n; i++) {
        psum[i+1]=psum[i]+a[i];
    }
    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", (psum[r]-psum[l-1]));
    }
}