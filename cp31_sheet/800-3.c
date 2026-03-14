#include <stdio.h>
#include <string.h>
int main() {
    int t, n;
    scanf ("%d", &t);
    while (t--) {
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);
    int op2= 0;
    for (int i=0; i<=n-3; i++) {
        if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.') {
            op2=1;
            break;}
    }
    if (op2) {
    printf("2\n");}
    else {
        int count = 0;
        for (int i=0; i<n; i++) {
            if (s[i]=='.') count++;
        }
        printf("%d\n", count);
    }}
}