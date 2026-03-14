#include <stdio.h>
#include <string.h>
int main () {
    char s[10];
    scanf("%s", s);
    if (strcmp(s,"red")==0)
    printf("SSS\n");
    else if(strcmp(s,"blue")==0)
    printf("FFF\n");
    else if(strcmp(s,"green")==0)
    printf("MMM\n");
    else
    printf("Unknown\n");
}