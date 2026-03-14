#include <stdio.h>
#include <math.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int found=0;
        for (int a=0; a<=99; a++) {
            for (int b=0; b<=99; b++) {
                if ((a+b)*(a+b)==n) {
                    printf("%d %d\n", a, b);
                    found =1;
                    break;
                }
            }
            if(found) break;
        }
        if (found==0) printf("-1\n");
    }
}