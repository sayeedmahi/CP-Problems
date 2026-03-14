#include <stdio.h>
int main () {
    int n, d;
    scanf("%d %d", &n, &d);
    char s[n];
    scanf("%s", s);
    int countsp =0;
    for (int i=0; i<n; i++) {
        if (s[i]=='@') countsp++;
    }
    int rem = countsp-d;
    printf("%d", n-rem);
}