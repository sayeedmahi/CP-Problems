#include <stdio.h>
#include <math.h>
int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    int z=(x+y)%12;
    if (z==0)
    printf("12\n");
    else if ((x+y)>12)
    printf("%d\n", z);
    else 
    printf("%d\n", (x+y));
}