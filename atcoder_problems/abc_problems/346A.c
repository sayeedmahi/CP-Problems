#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n-1];
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n-1; i++) {
        b[i]= a[i] * a[i+1];
    }
      for (int i=0; i<n-1; i++) {
        printf("%d ", b[i]);
    }
}