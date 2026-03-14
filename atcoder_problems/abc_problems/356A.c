
#include <stdio.h>
int main() {
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    
    for (int i=1; i<l; i++) {
        printf("%d ", i);
    }
    for (int i=r; i>=l; i--) {
        printf("%d ", i);
    }
    for (int i=r+1; i<=n; i++) {
        printf("%d ", i);
    }
}