#include <stdio.h>

int main() {
    char s[10];
    scanf("%s", s);
    int a= (s[0]-'0')* (s[2]-'0');
    printf("%d", a);
}