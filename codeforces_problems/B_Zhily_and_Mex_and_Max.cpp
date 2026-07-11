#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        vector<ll>a(n), b, dup;
        for (ll i=0; i<n; i++) {
            cin >> a[i];
        }
        ll mx= *max_element(all(a));
        b.push_back(mx);
        sort(all(a));
        for (ll i=0; i<n; i++) {
            if (i==0 || a[i]!=a[i-1]) {
                if (a[i]!=mx) b.push_back(a[i]);
            }
            else dup.push_back(a[i]);
        }
        for (auto x: dup) b.push_back(x);
        ll ans=0, mex=0;
        unordered_set<ll> prfx;
        for (auto x: b) {
            prfx.insert(x);
            while (prfx.count(mex)==1) {
                mex++;
            }
            ans+=mx+mex;
        }
        cout << ans << endl;
    }
    
    return 0;
}