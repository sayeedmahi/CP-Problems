#include <stdio.h> 
int main () {
    int M, D, y, m, d;
    scanf("%d %d", &M, &D);
    scanf("%d %d %d", &y, &m, &d);
    if (d==D) {
        d=1;
        if (m==M) { m=1;
            y=y+1;}
            else m=m+1;} 
    else d=d+1;
    printf("%d %d %d", y, m, d);
}