#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) { 
    int a, x, y;
    scanf("%d %d %d", &a, &x, &y);   
    if (x < a && a < y) {
    printf("NO\n");
    }
    else if (y < a && a < x) {
      printf("NO\n");
    }
    else printf("YES\n");
    }
}
    return 0;
}
}
