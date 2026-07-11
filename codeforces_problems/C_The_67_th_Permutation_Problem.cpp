#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[3*n];
        for (ll i =0; i<3*n; i++) {
            a[i]=i+1;
        }
        ll k=n;
        for (ll i=0; i<n; i++) {
            cout << i+1 << " " << i+1+k << " " << i+2+k << " ";
            k=k+1;
        }
        cout << endl;
    }
    return 0;
}