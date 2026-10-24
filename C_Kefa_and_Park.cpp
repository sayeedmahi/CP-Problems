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

vector<vector<int>>adj;
vector<int>cats;
int ans=0;
int m;

void dfs(int node, int parent, int consc) {
    if (cats[node]==1) {
        consc++;
    }
    else consc=0;
    if (consc>m) return;
    bool leaf=true;
    for (int child: adj[node]) {
        if (child==parent) continue;
        leaf=false;
        dfs(child, node, consc);
    }
    if (leaf) ans++;
}
void solve() {
    int n; cin>>n>>m;
    adj.resize(n+1);
    cats.resize(n+1);
    for (int i=1; i<=n; i++) cin>>cats[i];
    for (int i=1; i<n; i++) {
        int u, v;
        cin>>u>>v; 
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1, 0 ,0);
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