    #include <stdio.h>
     
    int main() {
        int t;
        scanf("%d", &t);
        while (t--) {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a==0 || b==0) {
                if ((a+b)%2==0) printf("Yes\n");
                else printf ("No\n");
            }
            else if (a%2==0) printf("Yes\n");
            else printf("No\n");
        }
        return 0;
    }

