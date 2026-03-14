#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (b<c) {
        if (a>c || a<b) printf("Yes");
        else printf("No"); 
    }
    else if (b>c) {
        if (a<b && a>c) printf("Yes");
        else printf("No");
    }
    else printf("No");
}