#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int unsorted = 0;
        for (int i=0; i<n-1; i++) {
            if (a[i]>a[i+1]) {
                unsorted = 1;
                break;
            }
        }
        if(unsorted) printf ("0\n");
        else {
            int mindiff = a[1]-a[0];
            for (int i=1; i<n-1; i++) {
            if ((a[i+1]-a[i])<mindiff) {
                mindiff= a[i+1]-a[i];
            }
        }
        printf("%d\n", (mindiff/2)+1);
        }
    }
}



#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    int count = 1;
    int get = 0; 
    for (int i=1; i<len; i++) {
        if (s[i]== s[i-1]) {
            count++;
            if (count>=7) {
                get=1;
                break;
            }
        } else {
            count=1;
        }
    }
    if (get) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
