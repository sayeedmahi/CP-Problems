
#include <stdio.h>
#include <math.h>
int main () {
    int h;
    scanf("%d", &h);
    for (int i=0; i<=30; i++) {
        if (pow(2, i)>(double)(h+1)) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
