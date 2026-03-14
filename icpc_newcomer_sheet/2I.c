#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int org = n;
    int rev = 0;
    while (n!=0) {
        int rem = n%10;
        rev = rev*10 + rem;
        n=n/10;
    }
    printf("%d\n", rev);
    if (org==rev) printf("YES\n");
    else printf("NO\n");
}