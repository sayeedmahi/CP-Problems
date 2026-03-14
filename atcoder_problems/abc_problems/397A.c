#include <stdio.h>
int main() {
    float x;
    scanf("%f", &x);
    if (x>=38.0) printf("1");
    else if (x>= 37.5 && x<=38.0) printf("2");
    else if (x<37.5) printf("3");
}