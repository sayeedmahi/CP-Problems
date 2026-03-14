#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d", &n);
    int a[n-1];
    int sum=0;
    for (int i=0; i<n-1; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i=0; i<n-1; i++) {
        sum=sum+a[i];
    }
    printf("%d\n", -sum);
    }
}