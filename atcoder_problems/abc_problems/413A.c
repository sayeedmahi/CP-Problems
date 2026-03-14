#include <stdio.h>
 
int main () {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100];
    int sum=0;
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]); 
        sum=sum+a[i];
    }
    if (m>=sum) printf("Yes\n");
    else printf("No\n");
}