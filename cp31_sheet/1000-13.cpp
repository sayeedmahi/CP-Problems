#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        ll n, x;
        cin >>n>>x;
        vector<ll>a(n);
        for (ll &i:a) cin>>i;
        ll l=a[0]-x;
        ll r=a[0]+x;
        ll ans=0;
        for (int i=1; i<n; i++) {
            ll nl=a[i]-x;
            ll nr=a[i]+x;
            l=max(l, nl);
            r=min(r, nr);
            if (l>r) {
                ans++;
                l=nl;
                r=nr; 
            }
        }
        cout <<ans << endl;
    }
    return 0;
}