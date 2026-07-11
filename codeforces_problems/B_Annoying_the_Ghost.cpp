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
        vector<int>a(n), b(n), c(n);
        for (int &i:a) cin >>i;
        set<int>s;
        for (int &i:b) {
            cin >>i;
            s.insert(i);
        }
        int ok=1;
        for (int i=0; i<n; i++) {
            auto it=s.lower_bound(a[i]);
            if (it==s.end()) {
                ok=0;
                break;
            }
            c[i]=*it;
            s.erase(it);
        }
        if (!ok) {
            cout << -1 << endl;
            continue;
        }
        ll ans=0;
        for (int i=0; i<n; i++) {
                for (int j=i+1; j<n; j++) {
                    if (c[i]>c[j]) ans++;
                }
            }
        cout << ans << endl;
    }
    return 0;
}