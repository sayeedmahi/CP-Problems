#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    scanf("%s", s);
    if (strcmp(s, "N") == 0) printf("S\n");
    else if (strcmp(s, "S") == 0) printf("N\n");
    else if (strcmp(s, "E") == 0) printf("W\n");
    else if (strcmp(s, "W") == 0) printf("E\n");
    else if (strcmp(s, "NE") == 0) printf("SW\n");
    else if (strcmp(s, "SW") == 0) printf("NE\n");
    else if (strcmp(s, "NW") == 0) printf("SE\n");
    else if (strcmp(s, "SE") == 0) printf("NW\n");
}
