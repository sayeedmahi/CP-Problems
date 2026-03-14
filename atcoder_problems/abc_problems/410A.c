
#include <stdio.h>
#include <string.h>
int main() {
    int n, k; 
    int a[100];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int count=0;
    for (int i=0; i<n; i++) {
        if (a[i]>=k) count++;
    }
    printf("%d\n", count);
}

