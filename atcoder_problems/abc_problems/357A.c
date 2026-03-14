
#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int h[n];
    int sum=0;
    int ans=n;
    for (int i=0; i<n; i++) {
        scanf("%d", &h[i]);
        sum=sum+h[i];
        if (sum>m) {
            ans = i;
            break;
        }
    }
    printf("%d", ans);
}