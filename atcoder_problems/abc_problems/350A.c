#include <stdio.h>

int main() {
    char s[7];
    scanf("%s", s);
    if (s[3]=='0' || s[3]=='1' || s[3]=='2') printf("Yes");
    else if (s[3]=='3') {
        if (s[4]=='1' && s[5]=='6') printf("No");
        else if(s[4]=='0' || s[4]=='1' || s[4]=='2' || s[4]=='3' || s[4]=='4') printf("Yes");
        else printf("No");
    }
    else printf("No");
}