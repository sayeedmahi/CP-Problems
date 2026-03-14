#include <stdio.h>
#include <string.h>

int main () {
    char s[31];
    scanf("%s", s);
    int len = strlen(s);
    if (s[len-1]=='n' && s[len-2]=='a' && s[len-3]=='s') printf("Yes");
    else printf("No");
}