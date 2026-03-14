#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d", &n);
    char s[n][100];
    int count = 0;
    for (int i=0; i<n; i++) {
        scanf("%s", s[i]);
        if (strcmp(s[i], "Takahashi")==0) count++;
    }
 printf("%d", count);
}