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
        ll x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
         ll d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        ll r_diff=(r1-r2)* (r1-r2);
        ll r_sum= (r1+r2)*(r1+r2);
        if (d>=r_diff && d<=r_sum) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}