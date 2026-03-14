#include <stdio.h> 
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k, x;
        scanf("%d %d %d", &n, &k, &x);
        if (x!=1) {
            printf("YES\n%d\n", n);
            for (int i=0; i<n; i++) {
                printf("1 ");
            }
            printf("\n");
        }
        else if (x==1) {
            if (k==1 || (k==2 && n%2!=0)) printf("NO\n");
            else if (n%2==0) {
                printf("YES\n%d\n", n/2);
                for (int i=0; i<(n/2); i++) {
                    printf("2 ");
                }
                printf("\n");
            }
            else if (n%2!=0) {
                printf("YES\n%d\n%d ", (n-3)/2+1, 3);
                for (int i=0; i<(n-3)/2; i++) {
                    printf("2 ");
                } 
                printf("\n");
            }

        }
        }
    }
        
    