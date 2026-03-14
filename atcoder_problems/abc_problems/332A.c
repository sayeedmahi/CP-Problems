#include <stdio.h>
int main () {
    int n, s, k;
    scanf("%d %d %d", &n, &s, &k);
    int p, q;
    int tprice = 0;
    for (int i=0; i<n; i++) {
        scanf("%d %d", &p, &q);
        tprice = tprice + p*q;
    }
    if (tprice>=s) printf("%d", tprice);
    else printf("%d", tprice+k);
}