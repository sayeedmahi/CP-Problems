#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a%b==0) printf("%d\n", 0);
        else printf("%d\n", b - (a%b));
    }
}