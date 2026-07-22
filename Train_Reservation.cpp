#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define F first
#define S second
void solve() { 
    int n;
    cin >>n;
    char x;
    cin >>x;
    bool ans=false;
    vector<string>a(n);
    for (int i=0; i<n; i++) {
        cin >>a[i];
    }
    for (int i=0; i<n; i++) {
        string s=a[i];
        if (s[x-'A']=='o') {
            ans=true;
            break;
        } 
    }
    if (ans) cout <<"Yes" <<endl;
    else cout <<"No" <<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    while (T--) 
        solve();
    return 0; 
}
