#include <stdio.h>
int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    float div = (float)a/b;
    int rounded= (int)(div+0.5);
    printf("floor %d / %d = %d\n", a, b, (a/b));
    if (a!=b) {printf("ceil %d / %d = %d\n", a, b, ((a/b)+1)); }
    else {printf("ceil %d / %d = %d\n", a, b, (a/b));}
    printf("round %d / %d = %d", a, b, rounded);
}

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     float div = (float)A / B;
//     int floorResult = (int)floor(div);
//     int ceilResult = (int)ceil(div);
//     int roundResult = (int)round(div);
//     printf("floor %d / %d = %d\n", A, B, floorResult);
//     printf("ceil %d / %d = %d\n", A, B, ceilResult);
//     printf("round %d / %d = %d\n", A, B, roundResult);
// }
