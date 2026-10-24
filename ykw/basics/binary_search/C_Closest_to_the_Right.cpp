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
    int n, k; cin>>n>>k;
    vi a(n); for (int &x:a) cin>>x;
    vi kv(k); 
    for (int &y:kv) {
        cin>>y;
        int l=-1;
        int r=n;
        while (r>l+1) {
            int mid=l+(r-l)/2;
            if (a[mid]<y) l=mid;
            else r=mid;
        }
        cout << r+1 << endl;
    } 
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}