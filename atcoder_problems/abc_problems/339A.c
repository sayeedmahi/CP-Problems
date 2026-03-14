#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s", s);
    int len=strlen(s);
    int found=-1;
    for (int i=len-1; i>=0; i--) {
        if (s[i]=='.') {
            found=i;
            break;
        }
    }
    for (int i=found+1; i<len; i++) {
        printf("%c", s[i]);
    }
    }