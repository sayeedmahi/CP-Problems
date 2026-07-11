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
        vector<int>a(n);
        for (auto &i:a) {
            cin >> i;
        }
        sort(all(a));
        int mid = (a[0] + a[n-1])/2;
        int ans=max(abs(mid-a[0]), abs(mid-a[n-1]));
        cout << ans << endl;
    }
    return 0;
}