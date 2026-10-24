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
    int n, m;
    cin >> n>> m;
    vi a(n);
    vll cnt(m+1, 0);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    vll spl(m+2, 0);
    for (int x=m; x>=1; x--) {
        spl[x]=spl[x+1]+cnt[x];
    }
    vll ans(m+1, 0);
    for (int v=1; v<=m; v++) {
        int req=m/v;
        vll pref(req+1, 0);
        for (int i=1; i<=req; i++) {
            pref[i]=pref[i-1]+spl[i*v];
        }
        for (int k=1; k<=m; k++) {
            ll T=1LL<<k;
            ll w=T-1;
            ll p=min(w, (ll)req);
            ll val=pref[p];
            if (T<=req) val+=cnt[T*v];
            ans[k]=max(ans[k], val);
            if (w>=m) break;
        }
    }
    for (int k=1; k<=m; k++) {
        ans[k]=max(ans[k-1], ans[k]);
    }
    for (int k=1; k<=m; k++) {
        cout << ans[k] << " ";
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