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

vector<vector<pair<int, int>>>adj;
vector<bool>visited;
int cost1=0;
void dfs (int u, int parent) {
    visited[u]=true;
    for (auto& [cost, v]:adj[u]) {
        if (v==parent) continue;
        if (!visited[v] || v==1) {
            dfs(v, u);
            cost1+=cost;    
        }
    }
}
void solve () {
    int n; cin>>n;
    adj.resize(n+1);
    visited.assign(n+1, false);
    int sum=0;
    for (int i=0; i<n; i++) {
        int a, b, c;
        cin>>a>>b>>c;
        sum+=c;
        adj[a].pb({0, b});
        adj[b].pb({c, a});
    }
    dfs (1, 0);
    cout << min(cost1, sum-cost1);
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}