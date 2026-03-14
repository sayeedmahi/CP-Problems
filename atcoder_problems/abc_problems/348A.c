
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char a[n];
    for (int i=0; i<n; i++) {
        a[i] = 'o';
    }
    for (int i=0; i<=n; i++) {
        if (i%3==0) a[i-1] = 'x';
    }    
    for (int i=0; i<n; i++) {
        printf("%c", a[i]);
    }
}