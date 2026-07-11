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
 
    int n, q;
    cin >> n >>q;
    vector<ll>a(n+1), diff(n+1, 0);
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) {
        diff[i]=a[i]-a[i-1];
    }
    while (q--) {
        int l, r;
        ll d;
        diff[l]+=d;
        diff[r+1]-=d;
    }
    for (int i=1; i<=n; i++) {
       diff[i]+=diff[i-1];
       cout << diff[i] << " "; 
    }
    return 0;
}