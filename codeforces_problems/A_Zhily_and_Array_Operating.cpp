#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        vector<ll>a(n);
        for (ll i=0; i<n; i++) {
            cin >> a[i];
        }
        for (ll i=n-2; i>=0; i--) {
            if (a[i+1]>0) {
                a[i]+=a[i+1];
            }
        }
        ll ans=0;
        for (ll i=0; i<n; i++) {
            if (a[i]>0) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}