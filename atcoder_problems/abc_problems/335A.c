#include <stdio.h>
#include <string.h>
int main () {
    char s[103];
    scanf("%s", s);
    int len =strlen(s);
    for (int i=0; i<len-1; i++) printf("%c", s[i]);
    printf("4\n");
}