#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char c1, c2;
    scanf("%d %c %c", &n, &c1, &c2);
    char s[n+1];
    scanf("%s", s);
    for (int i=0; i<n; i++) {
        if (s[i]==c1) putchar(c1);
        else putchar(c2);
    }
    return 0;
}