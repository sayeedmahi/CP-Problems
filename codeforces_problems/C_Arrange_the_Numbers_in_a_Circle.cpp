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
        ll sum=0;
        for (auto &i:a) {
            cin >> i;
            sum+=i;
        }
        ll unique=0, usable=0;
        for (auto i:a) {
            if (i==1) unique++;
            else {
                usable+=i/2 - 1;
            }
        }
        if (unique==n-1) {
            usable++;
        }
        ll imp = max(0LL, unique-usable);
        ll ans=sum-imp;
        if (ans<3) cout << 0 << endl;
        else cout << ans << endl;
    }
    return 0;
}