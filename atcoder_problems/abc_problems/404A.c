#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[26];
    scanf("%s", s);
    int ln= strlen(s);
    for (char c='a'; c<='z'; c++) {
        int count=0;
        for (int i=0; i<ln; i++) {
            if (s[i]==c) count++;
        }
        if (count==0) {printf("%c\n", c);
        break;}
    }
}