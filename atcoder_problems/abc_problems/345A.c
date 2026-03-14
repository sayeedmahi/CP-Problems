#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s", s);
    int len=strlen(s);
    int sub= 1;
    for (int i=1; i<len-1; i++) {
        if (s[i]!='=') {
            sub=0;
            break;
        }
    }
    if (s[0]!='<' || s[len-1]!='>') sub=0;
    if (sub==1) printf("Yes");
    else printf("No");
}