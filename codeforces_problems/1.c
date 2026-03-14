#include <stdio.h>
#include <stdlib.h> 

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max_ab = (a + b + abs(a - b)) / 2;
    int greatest = (max_ab + c + abs(max_ab - c)) / 2;
    printf("%d eh o maior\n", greatest);
    return 0;
}