#include <stdio.h>
#include <string.h>  
int main() {
    char s1[10], s2[10];
    scanf("%s %s", s1, s2);

    if ((strcmp(s1, "fine") == 0) && (strcmp(s2, "fine") == 0)) 
        printf("4\n");
    else if ((strcmp(s1, "sick") == 0) && (strcmp(s2, "sick") == 0)) 
        printf("1\n");
    else if ((strcmp(s1, "fine") == 0) && (strcmp(s2, "sick") == 0)) 
        printf("3\n");
    else if ((strcmp(s1, "sick") == 0) && (strcmp(s2, "fine") == 0)) 
        printf("2\n");

}