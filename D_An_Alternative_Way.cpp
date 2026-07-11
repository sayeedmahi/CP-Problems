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
        int n;
        cin >>n;
        vector<ll>a(n);
        vector<ll>b(n);
        for (ll &x:a) cin >>x;
        for (ll &x:b) cin >>x;
        ll op=0;
        bool ok=true;
        for (int i=0; i<n; i++) {
            op+=b[i]-a[i];
            if (op<0) {
                ok=false;
                break;
            }
        }
        if (ok) cout <<"YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}