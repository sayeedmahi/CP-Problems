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
    int n; cin>>n;
    vi a(n); for (int &x:a) cin>>x;
    vi pos(n);
    for (int i=0; i<n; i++) {
        if (i%2==0) pos[i]=i/2+1;
        else pos[i]=-(i/2+1);
    }
    vpi v;
    for (int i=0; i<n; i++) {
        v.pb({a[i], i});
    }
    sort(all(v));
    vi ans(n+1); ans[0]=0;
    for (int i=0; i<n; i++) {
        int orgidx=v[i].sd;
        ans[orgidx+1]=pos[n-1-i];
    }
    ll total=0;
    for (int i=0; i<n; i++) {
        total+=2LL*a[i]*abs(ans[i+1]);
    }
    cout << total << endl;
    for (int i=0; i<=n; i++) {
        cout << ans[i] << " ";
    }cout << endl;
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