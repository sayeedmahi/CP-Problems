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
    string s;    
    cin >>s;
    string nw;
    for (int i=0; i<n-1; i++) {
        if (s[i]=='1') nw+='1';
        else {
            if (s[i]!=s[i+1]) {
                nw+='0';
            }
        }
    }
    nw+=s[n-1];
    int cnt0=0, cnt1=0;
    for (int i=0; i<nw.size(); i++) {
        if (nw[i]=='0') cnt0++;
        else cnt1++;
    }
    if (cnt1>cnt0) cout <<"Yes" <<endl;
    else cout <<"No"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin>>T;
    while (T--) 
    solve();
    return 0; }
