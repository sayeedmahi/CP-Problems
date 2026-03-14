#include <stdio.h>
int main () {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int sum=0;
    for (int i=1; i<=n; i++) {
        int digitsum=0;
        int temp=i;
        while (temp!=0) {
            digitsum=digitsum+ (temp%10);
            temp=temp/10;
        }
        if (a<=digitsum && digitsum<=b) {
            sum=sum+i;
        }
    }
    printf("%d\n", sum);
}