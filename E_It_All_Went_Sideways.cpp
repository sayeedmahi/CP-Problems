#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        vector<ll>a(n);
        for (ll i=0; i<n; i++) {
            cin >> a[i];
        }
        ll i;
        for (i=n-1; i>=0; i--) {
            if (a[i]==1) break; 
        }
        ll mex1=0;
        for (ll j=0; j<i; j++) {
            mex1+=a[j];
        }
        
        cout << mex1 << endl;
    }

    return 0;
}