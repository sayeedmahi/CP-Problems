#include <stdio.h>
int main () {
    char s;
    scanf("%c", &s);
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<a[i]; j++) {
            printf("%c", s);
        }
        printf("\n");
    }
}