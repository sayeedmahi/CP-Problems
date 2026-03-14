#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int sum =0;
    for (int i=0; i<n-1; i++) {
    scanf("%d", &a[i]); 
    sum = sum+a[i];
    }
    printf("%d", 0-sum);

}