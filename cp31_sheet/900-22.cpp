#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while(t--) {
        long long n;
        cin >>n;
        long long a[n];
        long long count1=0, count0=0;
        for (long long i=0; i<n; i++) {
            cin>> a[i];
            if (a[i]==1) count1++;
            else if (a[i]==0) count0++;
        }
        long long ans;
        if (count0==0) ans=count1;
        else {
            ans=count1;
            for (long long i=0; i<count0; i++) {
                ans*=2;
            }
        } 
        cout << ans << endl;
    }
    return 0;
}
