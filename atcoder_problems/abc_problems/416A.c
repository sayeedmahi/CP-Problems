#include <stdio.h>
#include <string.h>
int main() {
    int n, l, r; 
    scanf("%d %d %d", &n, &l, &r);
    char s[100];
    scanf("%s", s);
    int count=0;
    for (int i=l-1 ; i<=(r-1); i++) {
        if (s[i] != 'o')
        count++;
    }
    if (count!=0)
    printf("No\n");
    else printf("Yes\n");
}