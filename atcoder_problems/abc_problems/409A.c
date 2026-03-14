#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    char t[n+1], a[n+1];
    scanf("%s", t);
    scanf("%a", a);
    
    int count=0;
    for (int i=0; i<n; i++) {
        if (t[i]=='o' && a[i]=='o')  count++;
    }
    if (count>=1) printf("Yes\n");
    else printf("No\n");
}


