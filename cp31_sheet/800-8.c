#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n];
    int ans=0;
    for (int i=0; i<n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        if (a[i]==k) {
            ans=1;
            break;
        }
    }
    if(ans) printf("YES\n");
    else printf("NO\n");
    }
}