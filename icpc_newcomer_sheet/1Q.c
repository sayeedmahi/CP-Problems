#include <stdio.h>
int main () {
    float a, b;
    scanf("%f %f", &a, &b);
    if (a>0) {
        if (b>0) printf("Q1");
        else if (b<0) printf("Q4");
        else printf("Eixo X");
    }
    else if(a<0) {
        if (b>0) printf("Q2");
        else if(b<0) printf("Q3");
        else printf("Eixo X");
    }
    else if (a==0) {
        if (b==0) printf("Origem");
        else printf("Eixo Y");
    }
}