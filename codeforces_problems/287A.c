#include <stdio.h>
int main () {
    char c[4][4];
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            scanf(" %c", &c[i][j]);
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            int black=0;
            if (c[i][j]=='#') black++;
            if (c[i][j+1]=='#') black++;
            if (c[i+1][j]=='#') black++;
            if (c[i+1][j+1]=='#') black++;
            if (black>=3 || black<=1) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}