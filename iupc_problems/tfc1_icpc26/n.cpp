#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
void solve () {
   int n;cin>>n; vector<int> a(n); 
    int sum=0;
    for (int i=0; i<n; i++) {
       cin>>a[i];
        sum+=a[i];
   };
    sort (all(a));
    int ans=n;
    int i=0;
    while (sum<0) {
        sum-=a[i];
        ans--;
        i++;
    }
    if (sum<0) cout << 0 << endl;
    else cout << ans << endl;
}
int main () {
    ios::sync_with_stdio(false);
    int T=1;
    cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}