#include <stdio.h>
#include <string.h>

int main () {
    char s[10];
    scanf("%s", s);
    if (s[2]=='R') printf("No");
    else if (s[0]=='R') printf("Yes"); 
    else {
        if (s[2]=='M') printf("Yes");
        else printf("No");
    }
}