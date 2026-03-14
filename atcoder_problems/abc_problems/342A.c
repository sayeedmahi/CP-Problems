#include <stdio.h>
#include <string.h>
int main () {
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    int a[26] = {0};
    for (int i=0; i<len; i++) {
        a[s[i]-'a']++;
    }
    int ans = -1;
for (int i=0; i<len; i++) {
        if(a[s[i]-'a']==1) ans=i+1;
    }
    printf("%d", ans);
}