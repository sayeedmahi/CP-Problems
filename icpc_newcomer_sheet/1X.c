#include <stdio.h>
int main () {
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    if (l1<l2) {
        if (r1<l2) printf("-1");
        else if (r1>=l2 && r1<=r2) printf("%d %d", l2, r1);
        else if (r1>=l2 && r1>r2) printf("%d %d", l2, r2);
    }
    else if (l1>l2) {
        if (r2<l1) printf("-1");
        else if (r2>=l1 && r2<=r1) printf("%d %d", l1, r2);
        else if (r2>=l1 && r2>r1) printf("%d %d", l1, r1);       
    }
    else if (l1==l2) {
        if (r1<r2) printf("%d %d", l1, r1);
        else if (r1>=r2) printf("%d %d", l1, r2);
    }
}