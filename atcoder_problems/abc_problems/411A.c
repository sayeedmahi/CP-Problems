#include <stdio.h>
#include <string.h>
int main() {
    int l;
    char p[100];
    scanf("%s", p);
    scanf("%d", &l);
    int b = strlen(p);
    if (b>=l)
    printf("Yes\n");
    else printf("No\n");
}


