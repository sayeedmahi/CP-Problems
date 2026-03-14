#include <stdio.h>
int main () {
    char s[10];
    scanf("%s", s); 
    int charac[26]= {0};
    for (int i=0; i<3; i++) {
        if (s[i] - 'A' == 0) charac[0]++;
        if (s[i] - 'B' == 0) charac[1]++;
        if (s[i] - 'C' == 0) charac[2]++;
    }
    if (charac[0]==1 && charac[1]==1 && charac[2]==1) printf("Yes");
    else printf("No");
}