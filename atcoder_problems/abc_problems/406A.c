#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf ("%d %d %d %d", &a, &b, &c, &d);
    if (a>c) printf("Yes\n");
    else if (a<c) printf("No\n");
    else {
        if (b>=d) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}