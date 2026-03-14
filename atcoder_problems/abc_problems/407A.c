
#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a%b==0) printf("%d\n", (a/b));
    else {
        float c = (float)a / (float)b;
        int d = a/b;
        int e= (a/b)+1;
        if (fabsf(c-(float)d) > fabsf(c-(float)e)) printf("%d\n", e);
        else printf("%d\n", d);
    }
}

