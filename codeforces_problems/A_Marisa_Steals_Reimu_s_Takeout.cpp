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
        ll num1=0, num2=0;
        ll ans=0;
        for (ll i=0; i<n; i++) {
            if (a[i]==0) ans++;
            else if (a[i]==1) num1++;
            else num2++;
        }
        ll both = min(num1, num2);
        ans+=both;
        ans+=(num1 - both)/3;
        ans+=(num2 - both)/3;
        cout << ans << endl;
    }

    return 0;
}