#include <stdio.h>
#include <string.h>
int main () {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    int first=-1, second;
    for (int i=0; i<len; i++) {
        if (s[i]=='|') {
            if (first==-1) first = i;
            else {
                second =i;
                break; }
        }
    }
    for (int i=0; i<first; i++) {
        putchar(s[i]);
    }
    for (int i=second+1; i<len; i++) {
        putchar(s[i]);
    }
    return 0;
}