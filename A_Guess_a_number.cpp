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

void solve() {
    int n; cin>>n;
    int l=-2e9, r=2e9;
    while (n--) {
        string s, b;
        int x;
        cin>>s>>x>>b;
        bool yes=(b=="Y");
        if (s==">") {
            if (yes) l=max(l, x+1);
            else r=min(r, x);
        }
        else if (s=="<") {
            if (yes) r=min(r,x-1);
            else l=max(l, x);
        }
        else if (s==">=") {
            if (yes) l=max(l, x);
            else r=min(r, x-1);
        }
        else {
            if (yes) r=min(r, x);
            else l=max(l, x+1);
        }
    }
    if (l<=r) {
        cout << l << endl;
    } else cout << "Impossible" <<endl;
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}