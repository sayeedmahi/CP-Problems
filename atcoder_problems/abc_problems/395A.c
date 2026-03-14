#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i=0; i<n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n-1; i++) {
        if (a[i]>=a[i+1]) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}