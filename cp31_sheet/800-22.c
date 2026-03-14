#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);
        if (n%2==0) printf("YES\n");
        else {
            if (n<k) printf("NO\n");
            else if (k%2!=0) printf("YES\n");
            else printf("NO\n");
        }
    }
}