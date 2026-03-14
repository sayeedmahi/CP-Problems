#include <stdio.h>
#include <stdlib.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int ydis1= d-b;
        int xdis1=a+ydis1;
        int xdis2=xdis1-c;
        if ((d<b) || (xdis1<c)) printf("-1\n");
        else printf("%d\n", ydis1+xdis2);
    }
}