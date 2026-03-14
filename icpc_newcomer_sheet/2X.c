#include <stdio.h>
#include <math.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int temp=n;
        int count=0;
        while (temp!=0) {
            int rem=temp%2;
            if (rem==1) count++;
            temp=temp/2;
        }
        int deci=0;
        for (int i=0; i<count; i++) {
            deci=deci+pow(2,i);
        }
        printf("%d\n", deci);
    }
}