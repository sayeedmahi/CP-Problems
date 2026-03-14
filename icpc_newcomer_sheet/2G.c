#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);  
    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);  
        long long int result = 1;
        for (int j = 2; j <= N; j++) {
            result *= j; 
        }
        printf("%lld\n", result); 
    }
}
