#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int a[4];
    for(int i=0; i<4; i++) scanf("%d", &a[i]);
    qsort(a, 4, sizeof(int), cmp);
    if(a[0]==a[1] && a[1]==a[2] && a[2]!=a[3]) printf("Yes\n");
    else if(a[0]!=a[1] && a[1]==a[2] && a[2]==a[3]) printf("Yes\n");
    else if(a[0]==a[1] && a[1]!=a[2] && a[2]==a[3]) printf("Yes\n");
    else printf("No\n");
}



// Process 2:
// #include <stdio.h>
// int main() {
//     int a[4], count[14] = {0};
//     for(int i=0; i<4; i++) {
//         scanf("%d", &a[i]);
//         count[a[i]]++;
//     }
//     int cnt1 = 0, cnt2 = 0, cnt3 = 0;
//     for(int i=1;i<=13;i++){
//         if(count[i]==1) cnt1++;
//         if(count[i]==2) cnt2++;
//         if(count[i]==3) cnt3++;
//     }
//     if(cnt3==1 && cnt1==1) printf("Yes\n"); 
//     else if(cnt2==2) printf("Yes\n");      
//     else printf("No\n");
// }



// Process 3:
// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }
// int main() {
//     int a[4];
//     for(int i=0;i<4;i++) scanf("%d",&a[i]);
//     qsort(a, 4, sizeof(int), cmp);
//     int diff = 0;
//     if(a[0]!=a[1]) diff++;
//     if(a[1]!=a[2]) diff++;
//     if(a[2]!=a[3]) diff++;
//     if(diff == 1) printf("Yes\n");
//     else printf("No\n"); }



// Process 4:
// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void*a, const void*b) {
//     return (*(int*)a-*(int*)b);
// }
// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int fullhouse = 0;
//     for (int e = 1; e <= 13; e++) {
//         int cards[5] = {a, b, c, d, e};
//         qsort(cards, 5, sizeof(int), cmp);
//         if ((cards[0]==cards[1] && cards[1]==cards[2] && cards[3]==cards[4]) ||
//             (cards[0]==cards[1] && cards[2]==cards[3] && cards[3]==cards[4])) {
//             fullhouse = 1;
//             break;
//         }
//     }
//     if (fullhouse) printf("Yes\n");
//     else printf("No\n");
// }
