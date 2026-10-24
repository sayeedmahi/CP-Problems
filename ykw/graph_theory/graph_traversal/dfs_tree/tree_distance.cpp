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

vector<vector<int>> adj;
vector<int> dist;

void dfs(int u, int parent) {
    for (int v : adj[u]) {

        // Don't go back to the node we came from
        if (v == parent)
            continue;

        // v is one edge farther from the starting node
        dist[v] = dist[u] + 1;

        // Continue DFS from v
        dfs(v, u);
    }
}

int main() {
    int n;
    cin >> n;

    adj.resize(n + 1);
    dist.resize(n + 1);

    // Read n-1 edges
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Start DFS from node 1
    dist[1] = 0;
    dfs(1, -1);

    // Print distance from node 1 to every node
    for (int i = 1; i <= n; i++) {
        cout << "Distance from 1 to " << i
             << " = " << dist[i] << '\n';
    }

    // Find the farthest node from node 1
    int farthest = 1;

    for (int v = 1; v <= n; v++) {
        if (dist[v] > dist[farthest]) {
            farthest = v;
        }
    }

    cout << "Farthest node = " << farthest << '\n';
    cout << "Distance = " << dist[farthest] << '\n';
    return 0;
}
