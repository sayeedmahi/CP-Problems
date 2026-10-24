#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;
#define pb push_back
#define eb emplace_back
#define ft first
#define sd second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define bug(a) cout << #a << " : " << a << endl;
#define bug2(a, b) cout << #a << " : " << a << " " << #b << " : " << b << endl;
constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1'000'000'007;
// constexpr int MOD = 998'244'353;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
ll a, b;
vector<ll>ans;
bool dfs (ll u) {
    if (u==b) {
        ans.pb(u);
        return true;
    }
    if (u>b) {
        return false;
    }
    ll v=u*2;
    if (v<=b && dfs(v)) {
        ans.pb(u);
        return true;
    }
    v=10*u+1;
    if (v<=b && dfs(v)) {
        ans.pb(u);
        return true;
    }
    return false;
}

void solve () {
    cin>>a>>b;
    if (dfs(a)) {
        yes();
        cout << ans.size() << endl;
        for (int i=ans.size()-1; i>=0; i--) {
            cout << ans[i];
            if (i!=0) cout << " "; 
        }
    }
    else {
        no();
    }
}

// void solve() {
//     int a, b; cin>>a>>b;
//     vi x;
//     int cur=b;
//     x.pb(cur);
//     while (cur>a) {
//         if (cur%10==1) cur/=10;
//         else if (cur%2==0) cur/=2;
//         else {
//             no();
//             return;
//         }
//         x.pb(cur);
//     }
//     if (cur!=a) {
//         no();
//         return;
//     }
//     yes();
//     cout << x.size() << endl;
//     for (int i=x.size()-1; i>=0; i--) {
//         cout << x[i];
//         if (i!=0) cout << " "; 
//     }
// }

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}