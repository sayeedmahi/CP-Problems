#include <stdio.h>
#include <string.h>
int main () {
    char s[100];
    scanf("%s", s);
    int len =strlen(s); 
    int count = 1;
    for (int i=0; i<len; i++) {
        if (s[i]==s[i+1]) {
            count++;
            if (count==7) {
                printf("YES\n");
                return 0;
            }
        }
        else count = 1;
    }
    printf("NO\n");
    return 0;
}