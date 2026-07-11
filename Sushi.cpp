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
 
    ll n, m;
    cin >> n>>m;
    vector<ll>a(n);
    for (ll &i:a) {
        cin >>i;
    }
    sort(all(a));
    vector<ll>b(m);
    for (ll &i:b) {
        cin >> i;
    }
    sort(all(b));
    int i=0, j=0;
    int cnt=0;
    while (i<n && j<m) {
        if (a[i]*2 >=b[j]) {
            cnt++;
            i++;
            j++;
        }
        else {
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}