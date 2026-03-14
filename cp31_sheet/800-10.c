#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while(t--) {
        char a[10][10];
        int score = 0;
        for (int i=0; i<10; i++) {
            for (int j=0; j<10; j++) {
                scanf(" %c", &a[i][j]);
                if (a[i][j]=='X') {
                    if (i==0 || i==9) score = score+1;
                    else if (i==1 || i==8) {
                        if (j==0 || j==9) score = score+1;
                        else score = score +2;
                    }
                    else if (i==2 || i==7) {
                        if (j==0 || j==9) score = score+1;
                        else if (j==1 || j==8) score = score +2;
                        else score = score+3;
                }
                    else if (i==3 || i==6) {
                        if (j==0 || j==9) score = score+1;
                        else if (j==1 || j==8) score = score +2;
                        else if (j==2 || j==7) score = score +3;
                        else score = score+4;
                }
                    else if (i==4 || i==5) {
                        if (j==0 || j==9) score = score+1;
                        else if (j==1 || j==8) score = score +2;
                        else if (j==2 || j==7) score = score +3;
                        else if (j==3 || j==6) score = score +4;
                        else score = score+5;
            }
        }
    }
}
    printf("%d\n", score);
    }
}