#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char s[n];
    int num1, num2;
    for (int i=0; i<n; i++) {
            s[i]= '-'; }
    if (n%2==0) {
        num2 = 2;
        s[n/2]= '=', s[(n/2)-1] = '=';
        for (int i=0; i<n; i++) {
            printf("%c", s[i]);
        }
    }
    else{
        num2 = 1;
        s[(n-1)/2]= '=';
        for (int i=0; i<n; i++) {
            printf("%c", s[i]);
        }
    }
}