#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    if (n>1) {
    for (int i=2; i<=n; i=i+2) {
        printf("%d\n", i);
    }   }
else printf("-1\n");
}