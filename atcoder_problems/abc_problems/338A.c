#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%s", a);
    int len=strlen(a);
    char b[100];
    for (int i=0; a[i]!='\0'; i++) {
        b[i]=toupper(a[i]);
    }
    b[len]='\0';
    int cap=0;
    for (int i=0; i<len; i++) {
        if (a[i]==b[i]) cap++;
    }
    if ((a[0]==b[0]) && (cap==1)) printf("Yes");
    else printf("No");
    }