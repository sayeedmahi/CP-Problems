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
        cin >>n;
        vector<ll>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<n; i++) {
            if (a[i]%6==0) cout<< a[i] << " ";
        }
        for (int i=0; i<n; i++) {
            if (a[i]%6!=0 && a[i]%2==0) cout << a[i] << " ";
        }
        for (int i=0; i<n; i++) {
            if (a[i]%6!=0 && a[i]%2!=0 && a[i]%3!=0) cout << a[i] << " ";
        }
        for (int i=0; i<n; i++) {
            if (a[i]%6!=0 && a[i]%2!=0 && a[i]%3==0) cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}