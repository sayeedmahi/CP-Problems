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
vector<bool>isSpecial;

int dfs(int u) {

    // Count u itself first:
    // 1 if u is special, otherwise 0.
    int cnt = isSpecial[u];

    // Visit every child of u.
    for (int v : adj[u]) {

        // dfs(v) gives the number of special nodes
        // in the entire subtree of child v.
        // Add that to u's count.
        cnt += dfs(v);
    }

    // After all children are processed,
    // cnt = special nodes in u's whole subtree.
    return cnt;
}


int main() {
    fastIO();

    int n;
    cin >> n;

    adj.resize(n + 1);
    isSpecial.assign(n + 1, false);


    // Input gives the parent of every node 2...n.
    // So we build the tree as:
    // parent -> child
    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;

        adj[p].pb(i);
    }


    // Mark which vertices are special.
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        isSpecial[x] = true;
    }


    // Node 1 is the root.
    // dfs(1) returns the answer for the whole tree.
    cout << dfs(1) << endl;

    return 0;
}
