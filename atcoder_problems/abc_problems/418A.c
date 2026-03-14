#include <stdio.h>
#include <string.h>
int main () {
    int n;
    char s[100];
    scanf("%d", &n);
    scanf("%s", s);
    int length = strlen(s);
    if (n>=3 && (s[length-1]=='a') && (s[length-2]=='e') && (s[length-3]=='t'))
    printf("Yes\n");
    else
    printf("No\n");
}