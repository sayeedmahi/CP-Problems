#include <stdio.h>
#include <string.h>
int main () {
    int n;
    scanf("%d", &n);
    char s[n][10];
    for (int i=0; i<n; i++) {
        scanf("%s", s[i]);
    }
    int sick = 0;
    for (int i=0; i<n-2; i++) {
        if (strcmp(s[i], "sweet")==0 && strcmp(s[i+1], "sweet")==0) {
            sick =1;
            break;
        }
    }
    if (sick) printf("No");
    else printf("Yes");
}