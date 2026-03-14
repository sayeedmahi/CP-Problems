#include <stdio.h>

int main() {
    int n, l;
    scanf("%d %d", &n, &l);
    int ans=0;
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i]>=l) ans++;
    }
    printf("%d", ans);
    return 0;
}