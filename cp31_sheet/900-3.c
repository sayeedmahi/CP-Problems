#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int n, k, x;
        scanf("%lld %lld %lld", &n, &k, &x);
        long long int minsum= k*(k+1)/2;
        long long int maxsum= (n*(n+1)/2) - ((n-k)*(n-k+1)/2); 
        if (x>=minsum && x<=maxsum) printf("YES\n");
        else printf("NO\n");
    }
}