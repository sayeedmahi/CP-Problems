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
vector<bool>marked;
vector<int>parent;

void dfs (int start) {
    marked[start]=true;
    for (int w: adj[start]) {
        if (!marked[w]) {
            parent[w]=start;
            dfs(w);
        }
    }
}

bool reachable(int x, int y) {
    marked.assign(adj.size(), false);
    dfs(x);
    return marked[y];
}

int main() {
    fastIO();
    int n, m;
    cin >> n>>m;
    adj.resize(n);
    parent.assign(n, -1);
    for (int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int x, y;
    cin>>x>>y;
    if (reachable(x, y)) {
        yes();
        vector<int>path;
        int cur=y;
        while (cur!=-1) {
            path.pb(cur);
            cur=parent[cur];
        }
        reverse(all(path));
        for (int i=0; i<path.size(); i++) {
            cout << path[i];
            if (i != path.size()-1) {
                cout << " -> ";
            }
        }
    }
    else no();
    return 0;
}
