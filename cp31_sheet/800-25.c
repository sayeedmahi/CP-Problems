#include<stdio.h>
#include<string.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d", &n);
    char s[2005];
    scanf("%s", s);
    int len = strlen(s);
    int paircount=0;
    for (int i=0, j=n-1; i<n && j>=0; i++, j--) {
        if (s[i]==s[j]) {
            break;
        }
        else paircount++;
    }
    if ((len-(paircount*2))<=0) printf("0\n");
    else printf("%d\n", len - (paircount*2));
    }
}