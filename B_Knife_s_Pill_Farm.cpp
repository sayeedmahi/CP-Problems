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
    int n,m; cin>>n>>m;
    vll a(n); for (ll &x:a) cin>>x;
    if (m==1) {
        cout << *max_element(all(a)) << endl;
        return;
    }
    int k=m-1;
    multiset<ll>ms; ll sum=0;
    ll ans=LLONG_MIN;
    for (int i=0; i<k; i++) {
        ms.insert(a[i]);
        sum+=a[i];
    }
    for (int i=k; i<n; i++) {
        ans=max(ans, 1LL*m*a[i]-sum);
        ms.insert(a[i]);
        sum+=a[i];
        if (ms.size()>k) {
            auto it=prev(ms.end());
            sum-=*it;
            ms.erase(it);
        }
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