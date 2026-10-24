#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
void solve () {
    int n, k; cin>>n>>k;
    vi a(n); vi b(n);
    for (int &x:a) cin>>x;
    for (int &x:b) cin>>x;
    vector<pair<int,int> >p;
    for (int i=0; i<n; i++) {
        p.push_back({a[i],b[i]});
    }
    int P=p.size();
    int ans=0;
    for (int i=0; i<P; i++) {
        for (int j=i+1; j<P; j++) {
            int g=max(p[i].first, p[j].first);
            int l=min(p[i].first, p[j].first);
            int cost=((g/2 < 100) ? g/2: (g-100)) + l;
            if (cost<=k) ans=max(ans, (p[i].second+p[j].second));
        }
    }
    cout << ans << endl;
}
int main () {
    int T; cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}