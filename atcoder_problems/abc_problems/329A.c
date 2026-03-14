#include <stdio.h>
#include <string.h>
int main() {
    char s[103];
    scanf("%s", s);
    int len =strlen(s);
    for (int i=0; i<len; i++) {
        printf("%c ", s[i]);
    }
}