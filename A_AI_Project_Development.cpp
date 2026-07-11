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
        ll n, x, y, z;
        cin >> n >> x >> y >> z;
        ll a1=(n+(x+y)-1)/(x+y);
        ll a2=(n+10*y*z+(x+10*y)-1)/(x+10*y);
        cout << min(a1,a2) << endl;
    }
    return 0;
}