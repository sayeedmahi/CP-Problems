#include <stdio.h>
#include <string.h>
int main() {
    int n, x;
    char name[10];
    scanf("%d", &n);
    char s[n][10];
    for (int i=0; i<n; i++) {
        scanf("%s", s[i]);
    }
    scanf ("%d %s", &x, name);
    if ((strcmp(s[x-1], name)==0))
    printf("Yes\n");
    else
    printf("No\n");
}