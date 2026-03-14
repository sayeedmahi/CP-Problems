#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    long long a[n];
    for (int i=0; i<n; i++) {
        scanf("%lld", &a[i]);
    }
    long long psum[n+1];
    psum[0]=0;
    for (int i=0; i<n; i++) {
        psum[i+1]=psum[i]+a[i];
    }
    int first[7], last[7];
    for (int i=0; i<7; i++) {
        first[i]=-1;
    }
    for (int i=0; i<=n; i++) {
        int r=psum[i]%7;
        if(first[r]==-1) first[r]=i;
        last[r]=i;
    }
    int maxlen=0;
    for (int i=0; i<7; i++) {
        if (first[i]!=-1) {
            int len=last[i]-first[i];
            if (len>maxlen) maxlen=len;
        }
    }
    printf("%d\n", maxlen);
}