#include <stdio.h> 
#include <stdlib.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int countn1 = 0, count1=0;
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
            if (a[i]==-1) countn1++;
            else count1++;
        }
        int count = 0;
                while (countn1>count1) {
                    countn1--;
                    count1++;
                    count++;
                }
                if (countn1%2!=0) {
                count++; }
                printf("%d\n", count);
        }
        }
        
    