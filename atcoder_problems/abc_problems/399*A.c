#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
int n;
char s[102], t[102]; 

scanf("%d", &n);
getchar(); 

fgets(s, sizeof(s), stdin);
fgets(t, sizeof(t), stdin);


s[strcspn(s, "\n")] = '\0';
t[strcspn(t, "\n")] = '\0';

int count = 0;
for (int i = 0; i < n; i++) {
if (s[i] != t[i]) count++;
}

printf("%d\n", count);
return 0;
}



// #include <stdio.h>
// #include <string.h>
// int main() {
//     int n;
//     char s[101], t[101];
//     scanf("%d", &n);
//     scanf("%s", s);
//     scanf("%s", t);
    
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         if (s[i] != t[i]) {
//             count++;
//         }
//     }

//     printf("%d\n", count);

//     return 0;
// }

