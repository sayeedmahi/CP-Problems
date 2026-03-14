#include <stdio.h>
#include <string.h>
int main () {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b); 
    char c[10];
    scanf("%s", c);
    if (strcmp(c, "Red")==0) {
        (g>b) ? printf("%d", b) : printf("%d", g);
    }
    else if (strcmp(c, "Green")==0) {
        (r>b) ? printf("%d", b) : printf("%d", r);
    }
    else if (strcmp(c, "Blue")==0) {
        (r>g) ? printf("%d", g) : printf("%d", r);
    }
}