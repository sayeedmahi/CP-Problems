#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    if (y%4!=0) printf("365");
    else if (y%4==0 && y%100!=0) printf("366");
    else if (y%100==0 && y%400!=0) printf("365");
    else if (y%400==0) printf("366");
}