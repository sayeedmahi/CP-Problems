#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
int c= n%10;
n=n/10;
int b= n%10;
n=n/10;
int a= n%10;
int first = (a+ c*10 + b*100);
int second = (b+ a*10 + c*100);
printf("%d %d", first, second);
}