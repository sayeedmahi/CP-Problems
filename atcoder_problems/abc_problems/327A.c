#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    char a[101];
    scanf("%s", a);
    int len = strlen (a);
    int ans =0;
    for (int i=0; i<len-1; i++) {
        if (a[i]=='a') {
            if (a[i+1]=='b') {
                ans = 1;
                break;
            }
        if (ans) break;
        }
        else if (a[i]=='b') {
            if (a[i+1]=='a') {
                ans=1;
                break;
            }
            if (ans) break;
        }
    }
    if (ans) printf("Yes");
    else printf ("No");
    return 0;
}