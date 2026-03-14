#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if (c%2==0) {
            if(a<=b) printf("Second\n");
            else printf("First\n");
        }
        else {
            if (a<b) printf("Second\n");
            else printf("First\n");
        }
    }
}