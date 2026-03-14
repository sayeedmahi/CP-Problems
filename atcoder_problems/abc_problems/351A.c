#include <stdio.h>
int main () {
    int a[9], b[8];
    int sum1=0, sum2=0;
    for (int i=0; i<9; i++) {
        scanf("%d", &a[i]);
        sum1=sum1+a[i];
    }
    for (int i=0; i<8; i++) {
        scanf("%d", &b[i]);
        sum2=sum2+b[i];
    }
    printf("%d", sum1+1-sum2);

}