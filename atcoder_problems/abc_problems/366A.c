#include <stdio.h>
int main () {
    int n, t, a;
    scanf("%d %d %d", &n, &t, &a);
        int rem = n- (t+a);
    if (t==a) printf("No");
    else if (t>a) {
        if ((a+rem)>=t) printf("No");
        else printf("Yes");
    }
    else if (t<a) {
        if ((t+rem)>=a) printf("No");
        else printf("Yes");
    }
}