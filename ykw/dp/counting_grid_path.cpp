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
    int R, C; cin>>R>>C;
    vector<vector<int>>dp(R, vector<int>(C, 0));
    dp[0][0]=1;
    for (int r=0; r<R; r++) {
        for (int c=0; c<C; c++) {
            if (r==0 && c==0) continue;
            // if (r==0 || c==0) dp[r][c]=1;
            // else dp[r][c]=dp[r-1][c]+dp[r][c-1];
            if(r>0) dp[r][c]+=dp[r-1][c];
            if(c>0) dp[r][c]+=dp[r][c-1];
        }
    }cout << dp[R-1][C-1] << endl;
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}