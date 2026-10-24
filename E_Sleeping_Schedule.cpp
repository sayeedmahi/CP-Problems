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
    int n, h, l, r; cin>>n>>h>>l>>r;
    vi a(n+1);
    for (int i=1; i<=n; i++) cin>>a[i];
    vector<vector<int>>dp(n+1, vector<int>(h, -1));
    dp[0][0]=0;
    int ans=0;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<h; j++) {
            if (dp[i-1][j]==-1) continue;
            int x=(j+a[i])%h, y=(j+a[i]-1)%h;
            int score=dp[i-1][j]+ (x>=l && x<=r), score2=dp[i-1][j]+(y>=l && y<=r);
            dp[i][x]=max(dp[i][x], score), dp[i][y]=max(dp[i][y], score2);
            if (i==n) {
                ans=max(ans, dp[i][x]);
                ans=max(ans, dp[i][y]);
            }
        }
    }
    cout << ans << endl;
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}