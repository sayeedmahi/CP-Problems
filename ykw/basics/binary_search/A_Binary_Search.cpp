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

bool bs (int target, int l, int r, vector<int>&a) {
    while (l<=r) {
        int mid=l+(r-l)/2;
        if (a[mid]==target) return true;
        if (target>a[mid]) l=mid+1;
        else r=mid-1;
    }
    return false;
}

void solve() {
    int n, k; cin>>n>>k;
    vi a(n); for (int &x:a) cin>>x;
    vi kv(k); for (int &y:kv) cin>>y; 
    for (int i=0; i<k; i++) {
        int l=0, r=n-1;
        if (bs(kv[i], l, r, a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}