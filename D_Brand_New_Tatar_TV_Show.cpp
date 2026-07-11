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
        int n, k;
        cin >> n>>k;
        vector<int>a(n);
        for (int &x:a) cin >>x;
        sort (all(a));
        vector<vector<int>>groups;
        vector<int>current;
        current.pb(a[0]);
        int group_start=a[0];
        for (int i=1; i<n; i++) {
            if (a[i]-group_start <= k) {
                current.pb(a[i]);
            }
            else {
                groups.pb(current);
                current.clear();
                current.pb(a[i]);
                group_start=a[i];
            }
        }
        groups.pb(current);
        bool ok=false;
        for (auto &group: groups) {
            if (group.size()%2==0) {
                ok=true;
                break;
            }
        }
        if (!ok) {
            for (auto &group: groups) {
                if (group.size()%2==0)continue;
                unordered_map<int, int>freq;
                int mx= INT_MIN;
                for (int x: group) {
                    freq[x]++;
                    mx=max(mx, x);
                }
                if (freq.size()>=2 && freq[mx]%2!=0) {
                    ok=true;
                    break;
                }
            }
        }
        if (ok) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}