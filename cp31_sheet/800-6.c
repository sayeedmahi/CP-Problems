#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int first = a[0], second = -1, count1=0, count2=0, distinct =1;
        for (int i=0; i<n; i++) {
            if (a[i]==first) {
                count1++;
            }
            else if(second==-1) {
                second = a[i];
                count2++;
                distinct++;
            }
            else if (a[i]==second) {
                count2++;
            }
            else {
                distinct=3;
                break;
            }
        }
        if(distinct==1) printf("Yes\n");
        else if (distinct==2) {
            if (n%2==0) {
                if (count1==n/2 && count2==n/2) printf("Yes\n");
                else printf("No\n");
            }
            else if (n%2!=0) {
                if ((count1==n/2 && count2==n/2 + 1) || (count1==n/2 +1 && count2==n/2)) printf("Yes\n");
                else printf("No\n");
            }
        }
        else printf("No\n");
    }
    return 0;
}