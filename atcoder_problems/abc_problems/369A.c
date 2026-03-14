#include <stdio.h>
#include <stdlib.h>
int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a==b) printf("1");
    else if ((abs(a-b))%2==0) printf("3");
    else if ((abs(a-b))%2!=0) printf("2");    
}