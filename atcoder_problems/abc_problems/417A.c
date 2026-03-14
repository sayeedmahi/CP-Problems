#include <stdio.h>
#include <string.h>
int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    char s[100];
    scanf("%s", s);
    int c= n-b;
    for (int i=a; i<=(c-1); i++) {
        printf("%c", s[i]);
    }
}