#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>

void solve () {
    int n;
    cin>>n; vi a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    vi freq(101);
    for (int i=0; i<n;i++) {
        freq[a[i]]++;
    }
    int mx=INT_MIN;
    for (int i=0; i<freq.size(); i++) {
        mx=max(mx, freq[i]);
    }
    cout << n-mx << endl;
}
int main () {
    ios::sync_with_stdio(false);
    int T=1;
    while (T--) {
        solve();
    }
    return 0;
}