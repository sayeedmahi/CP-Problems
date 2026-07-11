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
 
    int n, m, k;
    cin >> n >> m>>k;
    vector<ll>a(n+1);
    for (int i=1; i<=n; i++) cin >>a[i];
    vector<array<ll, 3>>operations(m);  
    for (int i=0; i<m; i++) {
        cin >> operations[i][0] >> operations[i][1] >> operations[i][2];
    }
    vector<ll>cnt(m+2, 0);
    vector<ll>add(n+2, 0);
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x>>y;
        cnt[x]++;
        cnt[y+1]--;
    }
    for (int i=1; i<=m; i++) {
        cnt[i]+=cnt[i-1];
        ll l = operations[i-1][0];
        ll r = operations[i-1][1];
        ll d = operations[i-1][2];
        ll total = cnt[i]*d;
        add[l]+=total;
        add[r+1]-=total;
    }
    for (int i=1; i<=n; i++) {
        add[i]+=add[i-1];
        cout << a[i]+add[i] << " ";
    }

    return 0;
}