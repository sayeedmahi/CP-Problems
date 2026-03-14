#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int digit;
    int a[10] = {0};
     while (n>0) {
         digit = n%10;
         a[digit]++;
         n=n/10;
     }
     if (a[1]==1 && a[2]==2 && a[3]==3) {
         printf("Yes");
     }
     else printf ("No");
}