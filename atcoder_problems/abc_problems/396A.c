#include <stdio.h>
#include <stdbool.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    bool count=false;
    for (int i=0; i<=n-3; i++) {
        if (a[i]==a[i+1] && a[i]==a[i+2]) {
            count=true;
            break;
        }
    }
    if (count==true) printf("Yes");
    else printf("No");
}