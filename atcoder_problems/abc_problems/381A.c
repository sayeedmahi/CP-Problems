#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
    if (n % 2 == 0) {
        printf("No\n");
        return 0;
    }
    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        if (s[i] != '1') {
            printf("No\n");
            return 0;
        }
    }
    if (s[mid] != '/') {
        printf("No\n");
        return 0;
    }
    for (int i = mid + 1; i < n; i++) {
        if (s[i] != '2') {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}