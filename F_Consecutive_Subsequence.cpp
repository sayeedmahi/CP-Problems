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
    int n; cin>>n; vi a(n+1); 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    vi dp(n+1, 1), parent(n+1, 0);
    int maxLen=1, endIdx=1;
    map<int, int>bestLen, bestIdx;
    for (int i=1; i<=n; i++) {
        dp[i]=bestLen[a[i]-1]+1;
        parent[i]=bestIdx[a[i]-1];
        if (dp[i]>bestLen[a[i]]) {
            bestLen[a[i]]=dp[i];
            bestIdx[a[i]]=i;
        }
        if (dp[i]>maxLen) {
            maxLen=dp[i];
            endIdx=i;
        }
    }
    vi ans;
    while (endIdx!=0) {
        ans.pb(endIdx);
        endIdx=parent[endIdx];
    }
    reverse(all(ans));
    cout << maxLen << endl;
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    } cout << endl;
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}