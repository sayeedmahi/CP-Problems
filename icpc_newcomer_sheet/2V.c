#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        int num= 4*i-3;
        printf("%d %d %d PUM\n", num, num+1, num+2);
    }
}