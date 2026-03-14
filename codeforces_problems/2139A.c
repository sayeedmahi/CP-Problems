#include <stdio.h>
int main () {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf ("%d %d", &a, &b);
        int op;
        if (a==b) op=0;
        else if(a%b==0 || b%a==0) op=1;
        else op=2;
        printf("%d\n", op);
    }
}