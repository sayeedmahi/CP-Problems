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
        int n, k, q;
        cin >>n>>k>>q;
        vector<ll>a(n);
        for (ll &x:a) {
            cin >> x;
        }
        ll cnt=0;
        ll ans=0;
        for (int i=0; i<n; i++) {
            if(a[i]<=q) cnt++;
            else {
                if (cnt>=k) {
                    ll p= cnt-k+1;
                    ans+= p*(p+1)/2;
                }
                cnt=0;
            }
        }
        if (cnt>=k) {
            ll p= cnt-k+1;
            ans+= p*(p+1)/2;
        }
        cout << ans << endl;
    }
    return 0;
}