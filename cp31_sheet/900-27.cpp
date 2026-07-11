#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long n, x;
        cin >> n >> x;
        vector <long long>a(n);
        long long sum=0;
        for (long long i=0; i<n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        long long maxi=0, mini;
        for (long long i=0; i<n; i++) {
            maxi+=(a[i]+x-1)/x;
        }
        if (sum%x==0) mini=sum/x;
        else mini= (sum+x-1)/x;
        cout << mini << " " << maxi<< endl;
    }
    return 0;
}