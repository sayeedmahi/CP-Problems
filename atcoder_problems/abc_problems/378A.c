#include <stdio.h>

int main() {
    int a[4], count[5]={0};
    for (int i=0; i<4; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }
    int max=0;
    for (int j=0; j<5; j++) {
        max=max+count[j]/2;
    }
    printf("%d", max);
}