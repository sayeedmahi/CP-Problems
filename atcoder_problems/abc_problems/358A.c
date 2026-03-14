#include <stdio.h>
#include <string.h>
int main () {
    char s[10], t[10];
    scanf("%s %s", s, t);
    if (strcmp(s, "AtCoder")==0 && strcmp(t, "Land")==0) printf("Yes");
    else printf("No");
}