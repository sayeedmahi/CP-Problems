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
        if (n%2==0) cout << n/2 << " " << n/2 << endl;
        else {
            ll d =n;
            for (ll i=3; i*i<=n; i=i+2) {
                if (n%i==0) {
                    d=i;
                    break;
                }
            }
            ll g=n/d;
            cout << g << " " << n-g << endl;
        }
    }
    return 0;
}