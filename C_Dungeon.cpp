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
    int n, m; cin>>n>>m;
    priority_queue<ll, vector<ll>, greater<ll>>pq;
    for (int i=0; i<n; i++) {
        ll x;
        cin>>x;
        pq.push(x);
    }
    vll b(m); for (ll &y:b) cin>>y;
    vll c(m); for (ll &z:c) cin>>z;
    vector<pair<ll, ll>>v;
    vector<ll>v2;
    for (int i=0; i<m; i++) {
        if (c[i]>0) {
            v.push_back({b[i], c[i]});
        }
        else {
            v2.push_back(b[i]);
        }
    }
    sort(all(v)), sort(all(v2));
    ll ans=0; 
    vll w;
    for (auto [y,z]:v) {
        while (!pq.empty() && pq.top()<y) {
            w.push_back(pq.top());
            pq.pop();
        }
        if (pq.empty()) break;
        ll add=pq.top();
        pq.pop();
        ans++;
        pq.push(max(add,z));
    }
    for (ll x:w)
        pq.push(x);
    for (ll y:v2) {
        while (!pq.empty() && pq.top()<y) {
            pq.pop();
        }
        if (pq.empty()) break;
        pq.pop();
        ans++;
    }
    cout << ans << endl;
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