#include <stdio.h>
int main () {
  int a, b;
  scanf("%d", &a);
  if (400%a==0) printf("%d", 400/a);
  else printf("-1");
}