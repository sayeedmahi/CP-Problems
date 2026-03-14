#include <stdio.h>

int main() {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    if ((a[0]*a[1]==a[2]) || (a[0]*a[2]==a[1]) || (a[1]*a[2]==a[0])) printf("Yes\n");
    else printf("No\n");

}