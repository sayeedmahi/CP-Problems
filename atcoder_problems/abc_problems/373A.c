#include <stdio.h>
#include <string.h>

int main () {
    char s[100];
    int count= 0;
    for (int i=0; i<12; i++) {
        scanf("%s", s);
        if (strlen(s)==i+1) count++;
    }
    printf("%d", count);
}