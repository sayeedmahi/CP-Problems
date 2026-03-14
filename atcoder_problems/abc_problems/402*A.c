#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main () {
    char S[101];
    fgets(S, sizeof(S), stdin);
    S[strcspn(S, "\n")] = '\0';
    char S2[101];
    int len = strlen(S);
    for (int i=0; i<len; i++) {
        S2[i]=toupper(S[i]);
    }
    S2[len] = '\0';
    for (int i=0; i<len; i++) {
        if(S[i]==S2[i]) printf("%c", S[i]);
    }
}