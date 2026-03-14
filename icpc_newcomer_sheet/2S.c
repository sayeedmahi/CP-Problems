#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        int start, ending;
        if (x>y) {
            if (y%2==0) start= y+1;
            else start=y+2;
            ending =x;
        }
        else {
            if (x%2==0) start=x+1;
            else start=x+2;
            ending=y; 
        }
        int sum=0;
        for (int i=start; i<ending; i=i+2) {
            sum=sum+i;
        }
        printf("%d\n", sum);
    }
}