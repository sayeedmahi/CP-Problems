#include <stdio.h>
int main () {
    int x; 
    scanf("%d", &x);
    int prcheck=0; 
    for (int i=2; i<x; i++) {
        if (x%i==0) prcheck=1;
    }
    if (x==2) printf("YES");
    else if (prcheck==0) printf("YES");
    else printf("NO");
}