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

bool isPrime (int p) {
    if (p<2) return false;
    for (int i=2; i*i<=p; i++) {
        if (p%i==0) return false;
    }
    return true;
}

void solve() {
    int n, k; cin>>n>>k;
    vi dp(n+1, 0);
    for (int i=k+1; i<=n; i++) {
        dp[i]=INT_MAX;
    }
    for (int i=1; i<=n; i++) {
        for (int p=2; p*i<=n; p++) {
            if (isPrime(p)) {
                dp[p*i]=min(dp[p*i], 1+p*dp[i]);
            }
        }
    }
    int ans=0;
    vi a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
        ans+=dp[a[i]];
    }cout << ans << endl;
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