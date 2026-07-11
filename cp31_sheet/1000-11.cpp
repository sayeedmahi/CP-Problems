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
 
    ll n, d;
    cin >> n>>d;
    vector<ll>a(n);
    for (ll &x:a) cin >>x;
    sort(all(a), greater<ll>());
    ll op=0, i=0, ans=0;
    while ((d/a[i])+1<=(n-op)) {
        op+=(d/a[i])+1;
        ans++;
        i++;
    }
    cout << ans << endl;
    return 0;
}