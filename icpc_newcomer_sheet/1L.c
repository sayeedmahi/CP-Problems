#include <stdio.h>
#include <string.h>
int main () {
    char f1[101], s1[101], f2[101], s2[101]; 
    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);
    if (strcmp(s1, s2)==0) printf("ARE Brothers\n");
    else printf("NOT\n");
}