#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
void solve () {
    int n; cin>>n;
    if (n<=20) cout << n*10 << endl;
    else {
        cout << 200 + (n-20)/2*5 << endl;
    }

}
int main () {
    ios::sync_with_stdio(false);
    int T=1;
    cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}