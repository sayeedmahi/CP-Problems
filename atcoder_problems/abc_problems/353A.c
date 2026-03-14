
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &h[i]);
    }
    int exists=-1;
    for (int i=0; i<n; i++) {
        if (h[i]>h[0]) {
            exists=i+1;
            break;
        }
    }
    printf("%d", exists);
}

