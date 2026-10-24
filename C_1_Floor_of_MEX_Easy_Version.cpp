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
    ll n; cin>>n;
    vll a(n+1);
    for (ll i=1; i<=n; i++) {
        cin>>a[i];
    }
    vll maxr(n, -1);
    for (ll k=1; k<=n; k++) {
        ll l=a[k]*k;
        ll r=a[k]*k+k-1;
        if (l<n) {
            maxr[l] = r;
        }
    }
    vll ans;
    ll curr=-1;
    for (ll i=0;i<n; i++) {
        curr=max(curr, maxr[i]);
        if (curr<i) {
            ans.pb(i);
        }
    }
    cout<<sz(ans)<<endl;
    for (int i=0;i<sz(ans); i++) {
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