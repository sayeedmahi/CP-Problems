#include <stdio.h>
int main () {
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    if (a!=b) printf("A");
    else if (a==c) printf("B");
    else printf("C");
}

// #include <stdio.h>
// int main() {
//     char SAB, SAC, SBC;
//     scanf(" %c %c %c", &SAB, &SAC, &SBC);
//     int scoreA = 0, scoreB = 0, scoreC = 0;
//     if (SAB == '<') scoreB++;    else scoreA++;
//     if (SAC == '<') scoreC++;    else scoreA++;
//     if (SBC == '<') scoreC++;    else scoreB++;
//     if (scoreA == 1) printf("A\n");
//     else if (scoreB == 1) printf("B\n");
//     else printf("C\n");
// }
