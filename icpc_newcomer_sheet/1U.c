#include <stdio.h>
int main () {
    double N;
    scanf("%lf", &N);
    int intPart = (int)N;
    double DeciPart = N-intPart;
    if (DeciPart == 0) {
        printf("int %d", intPart);
    }
    else printf("float %d %.3lf", intPart, DeciPart);
}