#include <stdio.h>
#include <string.h>

int main () {
  char s [101];
  scanf("%s", s);
  int k=0;
  for (int i=0; s[i]!='\0'; i++) {
    if (s[i]=='2') k++;
  }
  for (int i=0; i<k; i++) {
    putchar('2');
  }
  printf("\n");
  return 0;
}