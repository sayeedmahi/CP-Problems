#include <stdio.h>

int main() {
    int a, b;
    scanf ("%d %d", &a, &b);
    if (a==b) printf("-1");
    else {
        if (a!=1 && b!=1) printf("1");
        else if (a!=2 && b!=2) printf("2");
        else if (a!=3 && b!=3) printf("3");
    }
}

