#include <stdio.h>
int main () {
    int l, r;
    scanf("%d %d", &l, &r);
    if (l==1 && r==0) printf("Yes");
    else if (l==0 && r==1) printf("No");
    else printf("Invalid");
}