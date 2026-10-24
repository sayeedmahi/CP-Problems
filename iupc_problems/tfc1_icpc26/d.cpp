#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
void solve () {
    int n; cin>>n;
    vector<string> s(n);
    for (int i=0; i<n; i++) {
        cin>>s[i];
    }
    sort(all(s), [] (const string &x, const string &y) {
        return x+y < y+x;
    });
    string S="";
    for (int i=0; i<n; i++) {
        S+=s[i];
    }cout << S << endl;

}
int main () {
    ios::sync_with_stdio(false);
    int T=1;
    while (T--) {
        solve();
    }
    return 0;
}