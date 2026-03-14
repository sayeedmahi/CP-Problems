#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    for (int i=2; i<=n; i++) {
        int notprime= 0;    
        for (int j=2; j<i; j++) {
            if (i%j==0) {
                notprime=1;
                break;
            }
        }
        if(notprime==0) printf("%d ", i);
    }
}