#include <stdio.h>

int main() {
    int r, x;
    scanf ("%d %d", &r, &x);
    if (x==1) {
        if (1600<=r && r<=2999) printf("Yes\n");
        else printf("No\n");
    }
    else if(x==2) {
        if (1200<=r && r<=2399) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}