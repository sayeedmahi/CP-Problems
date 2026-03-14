#include <stdio.h>
int main () {
    int a[5], target[5]= {1, 2, 3, 4, 5};
    for (int i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }
    int b[5];
   
    for (int i=0; i<4; i++) {
    for (int i=0; i<5; i++) {
        b[i]=a[i];
    }
        int temp = b[i];
        b[i]=b[i+1];
        b[i+1] = temp;
        int sorted = 1; 
        for (int i=0; i<5; i++) {
            if (b[i]!=target[i]) {
                sorted = 0;
                break;
            }
        }
            if(sorted) {
                printf("Yes");
                return 0; }
    }

    printf("No");
    return 0;
}