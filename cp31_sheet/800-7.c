#include <stdio.h>
#include <string.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char x[2000], s[100], tmp[2000];
        scanf("%s", x);
        scanf("%s", s);
        int ans = -1;
        for (int i=0; i<=5; i++) {
            if (strstr(x, s)) {
                ans = i;
                break;
            }
            else {strcpy(tmp, x);
            strcat(x, tmp);}
        }
        printf("%d\n", ans);
    }
}