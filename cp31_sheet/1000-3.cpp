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
        int n, p;
        cin  >> n>> p;
        vector<ll>a(n);
        vector<ll>b(n);
        for (ll &x:a) {
            cin >>x;
        }
        for (ll &x:b) {
            cin >>x;
        }
        vector<pair<ll, ll>>v;
        for (int i=0; i<n; i++) {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            return a.second < b.second;
        });
        ll cost=p;
        ll steps=1;
        for (auto [x, y]:v) {
            if (steps==n) break;
            else if (y<=p) {
                ll tmp=x;
                while (tmp--) {
                    if (steps==n) break;
                    cost+=y;
                    steps++;  
                }
            }
            else {
                cost+=p*(n-steps);
                break;
            }
        }
        cout << cost << endl;
    }
    return 0;
}