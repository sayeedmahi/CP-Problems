#include <stdio.h> 
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d", &n);
    int a[n];
    int sorted = 1;
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]); 
    }
    for (int i=0; i<n-1; i++) {
        if (a[i]>a[i+1]) {
            sorted =0;
            break;
        }
    }
if(sorted)printf("YES\n");
else {
    if(a[0]==1) printf("YES\n");
    else printf("NO\n");
}
}
}