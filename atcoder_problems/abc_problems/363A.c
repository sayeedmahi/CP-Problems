#include <stdio.h>
int main () {
    int r;
    scanf("%d", &r);
    printf("%d", (100-(r%100)));
}