#include <stdio.h>
int main () {
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int ans;
    if (n==0 || k==0) ans =0;
    else if (n<m && n<k) ans = n;
    else if (k<n && k<m) ans = k;
    else if (m<k && m<n) {
        long long int count1= m;
        long long int count2= (n-m)/2;
        if (count2<(k-m)) ans = count1+count2;
        else ans = k;
    }
    printf("%lld", ans);
}