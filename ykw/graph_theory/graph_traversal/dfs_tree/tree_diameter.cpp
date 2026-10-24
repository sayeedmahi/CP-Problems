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

vector<vector<int>> adj;  // Adjacency list of the tree
vector<int> dist;         // Distance from the current DFS starting node

void dfs (int u, int parent) {
    for (int v: adj[u]) {
        if (v==parent) continue;  // Don't go back to the parent

        dist[v]=dist[u]+1;        // Moving across one edge increases distance by 1
        dfs(v,u);                // Move to v, with u as its parent
    }
}

int farthestNode (int start, int n) {
    fill(dist.begin(), dist.end(), -1);  // Reset distances for a new DFS

    dist[start]=0;                       // Distance from start to itself is 0
    dfs(start, -1);                      // Start a fresh DFS; start has no parent

    int farthest=start;

    for (int v=1; v<=n; v++) {
        if (dist[v]>dist[farthest]) {
            farthest=v;                  // Keep the node with maximum distance
        }
    }

    return farthest;
}

int main() {
    int n;
    cin >> n;

    adj.resize(n+1);
    dist.resize(n+1);

    // A tree with n nodes has exactly n-1 edges
    for (int i=0; i<n-1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);                     // Tree is undirected
    }

    // First DFS: find one endpoint of the diameter
    int endpoint1=farthestNode(1, n);

    // Second DFS: find the other endpoint of the diameter
    int endpoint2=farthestNode(endpoint1, n);

    // After the second DFS, dist[] contains distances from endpoint1
    int diameter=dist[endpoint2];

    cout << "Endpoint 1 = " << endpoint1 << '\n';
    cout << "Endpoint 2 = " << endpoint2 << '\n';
    cout << "Diameter = " << diameter << '\n';

    return 0;
}