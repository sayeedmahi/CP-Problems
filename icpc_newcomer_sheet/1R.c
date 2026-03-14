#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int y, m, d;
    y = n/365;
    m = (n-(y*365))/30;
    d = ((n-(y*365))-(m*30));
    printf("%d years\n%d months\n%d days", y, m, d); 
}