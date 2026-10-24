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

bool maxlen(int m, int n, vector<int>&l, vector<int>&r,vector<int>&u, vector<int>&v) {
    int j=1;
    for (int i=0; i<n && j<=m; i++) {
        int right=m-j+1;
        if ((j<l[i] || j>r[i]) && (right<u[i]|| right>v[i])) {
            j++;
        }
    }
    return j==m+1;
}
void solve() {
    int n;
    cin >> n;
    vector<int>l(n), r(n), u(n), v(n);
    for (int i=0; i<n; i++) {
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }
    for (int m=n; m>=1; m--) {
        if (maxlen(m, n, l, r, u, v)) {
            cout << m << endl;
            return;
        }
    }
    cout << 0 << endl;
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