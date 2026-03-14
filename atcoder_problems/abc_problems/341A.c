#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char s[2*n +2];
    for (int i=0; i<=2*n; i=i+2) {
        s[i]='1';
    }
    for (int i=1;i<2*n; i=i+2) {
        s[i]='0';
    }
    s[2*n+1]='\0';
    printf("%s", s);
}