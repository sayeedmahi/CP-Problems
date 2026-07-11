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
        cin >> n;
        vector<ll>a(n);
        for (ll &i:a) cin >>i;
        ll mx=INT_MIN; 
        for (int i=0; i<n-1; i++) {
            mx=max(mx, a[i]);
            if (a[i]>a[i+1]) {
                a[i+1]=a[i]+a[i+1];
            }            
        }
        if (a[n-1]>mx) mx=a[n-1];
        cout << mx << endl;
    }
    return 0;
}