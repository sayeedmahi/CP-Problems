    #include <stdio.h>
    #include <stdlib.h>
    int main() {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int min=abs(a[0]);
        for (int i=1; i<n; i++) {
            if (abs(a[i])<min) min=abs(a[i]);
        }
        printf("%d", min);
    }

