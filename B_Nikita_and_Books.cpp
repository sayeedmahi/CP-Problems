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
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1'000'000'007;
// constexpr int MOD = 998'244'353;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

template <typename T>
void read(vector<T>& v) {
    for (auto& x : v)
        cin >> x;
}

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int &x:a) cin>>x;
    ll op=a[0]-1;
    bool ok = true;
    for (int i=1; i<n; i++) {
        if ((a[i]+op)<=i) {
            ok=false;
            break;
        }
        op=op+a[i]-i-1;
    }
    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    fastIO();

    int T = 1;
    cin >> T;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}