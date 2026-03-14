#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int T = 0;  
    int W = 0;  
    for (int i = 0; i < n; i++) {
        int t, v;
        scanf("%d %d", &t, &v);
        int TI = t - T;
        if (W > TI) {
            W = W- TI;  
        } else {
            W = 0;  
        }
        W = W+ v;
        T = t;
    }
    printf("%d\n", W);
    return 0;
}