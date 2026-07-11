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
        for (ll &i:a) {
            cin >> i;
        }
        ll psum=0;
        ll mn=100000000000000000;
        for (int i=0; i<n; i++) {
            psum+=a[i];
            mn=min(mn, psum/(i+1));
            cout << mn << " ";
        }
        cout << endl;
    }
    return 0;
}