#include <stdio.h>
int main () {
    int a, b, d;
    char c;
    scanf("%d %c %d = %d", &a, &c, &b, &d);
    if (c=='+') {
        if (a+b==d) printf("Yes");
        else printf("%d", a+b);
    }
    else if (c=='-') {
        if (a-b==d) printf("Yes");
        else printf("%d", a-b);
    }
    else {
        if (a*b==d) printf("Yes");
        else printf("%d", a*b);
    }
}