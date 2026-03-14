#include <stdio.h>

int main() {
    int n, c;
    scanf ("%d %d", &n, &c);
    int t[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &t[i]);
    }
    int candies=1;
    int lastcandy= t[0];
    for (int i=0; i<n; i++) {
        if ((t[i]-lastcandy)>=c) {
            candies++;
            lastcandy=t[i];
        }
    }
    printf("%d", candies);
    
}

