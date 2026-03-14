

    #include <stdio.h>
    int main  () {
        int t, n, k;
        scanf("%d", &t);
        while (t--) {
            scanf("%d %d", &n, &k);
            int a[n];
            for (int i=0; i<n; i++) {
                scanf("%d", &a[i]);
            }
            int m = sizeof (a) /sizeof (a[0]); 
            int sorted =1;
            for (int i=0; i<m-1; i++) {
                if (a[i] > a[i+1]) {sorted =0;
                break;}
            }
            if (sorted) printf("YES\n");
            else {
            if (k==1) printf("NO\n");
            else printf("YES\n"); }
        }
    }