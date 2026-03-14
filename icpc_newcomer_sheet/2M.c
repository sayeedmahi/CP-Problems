#include <stdio.h>
int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    int count=0;
    for (int i=a; i<=b; i++) {
        int lucky=1;
        int tmp =i;
        while (tmp!=0) {
            int rem = tmp%10;
            if (rem!= 4 && rem!=7) {
                lucky=0;
                break;
            }
            tmp=tmp/10;
        }
        if(lucky) {
            printf("%d ", i);
            count++;
        }
    }
    if (count==0) printf("-1");
}