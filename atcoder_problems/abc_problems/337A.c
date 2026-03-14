#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x, y;
    int scorex=0, scorey=0;
    while (n--) {
        scanf("%d %d", &x, &y);
        scorex= scorex+x;
        scorey=scorey+y;
    }
    if (scorex>scorey) printf("Takahashi");
    else if(scorex<scorey) printf("Aoki");
    else printf("Draw");
}