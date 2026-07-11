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
    cin.tie(nullptr);[]
 
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n>> k;
        if (n<=k) cout <<n << endl;
        else {
            int m = n/k;
            int ans= __builtin_popcount(m);
            for (int i=m; i>=0; i--) {
                ans=max(ans, __builtin_popcount(i));
            }
            ans = ans*k;
            cout << ans << endl;
        }
    }
    return 0;
}