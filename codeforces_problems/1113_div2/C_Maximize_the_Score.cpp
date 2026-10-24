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
    int n;
    cin >>n;
    int m=2*n;
    vi a(m+1);
    vi first(n+1, 0);
    vi left (m+1, 0);
    for (int i=1; i<=m; i++) {
        cin >> a[i];
        if (first[a[i]]==0) {
            first[a[i]]=i;
        }
        else left[i]=first[a[i]];
    }
    vll dp(m+1, 0);
    for (int i=1; i<=m; i++) {
        dp[i]=dp[i-1]+1;
        if (left[i]!=0) {
            ll l=left[i];
            ll len=i-l+1;
            dp[i]=max(dp[i], len*len+dp[l-1]);
        }
    }
    cout << dp[m] << endl;
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