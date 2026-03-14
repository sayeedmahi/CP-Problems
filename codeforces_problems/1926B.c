#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n][n];
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                char c;
                scanf(" %c", &c);
                a[i][j]=c-'0';
            }
        }
        int calc=-1;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                    if (a[i][j]==1) {
                    calc = i;
                    break; }
            }
            if (calc!=-1) break;
        }

        int sumr1= 0, sumr2=0;
        if (calc+1 <n) {
        for (int j=0; j<n; j++) {
            sumr1= sumr1+a[calc][j];
            sumr2= sumr2+a[calc+1][j];
            }
        }
        if(sumr1==sumr2) printf("SQUARE\n");
        else printf("TRIANGLE\n");



    }
}