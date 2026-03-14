#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000]; 
    scanf("%s", s);  
    scanf("%s", t);
    int slen = strlen(s);
    int tlen = strlen(t);   
    printf("%d %d\n", slen, tlen);
    printf("%s %s\n", s, t);
    return 0;
}
