#include <stdio.h>
int main () {
    int x;
    scanf("%d", &x);
    int digit;
    while (x>0) {
        digit = x%10;
        x= x/10;
    }
    if (digit%2==0) printf("EVEN");
    else printf("ODD");
}