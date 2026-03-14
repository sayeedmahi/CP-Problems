#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);  
    long long max = 0;  
    long long x;
    for (int i = 0; i < N; i++) {
        scanf("%lld", &x); 
        if (i == 0 || x > max) {
            max = x; 
        }
    }    
    printf("%lld\n", max);  
}
