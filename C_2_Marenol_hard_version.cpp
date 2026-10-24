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
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    vi oa, ob, ea, eb;
    for (int i=0; i<n; i++) {
        if (a[i]=='1') {
            if ((i+1)%2==1) oa.pb(i+1);
            else ea.pb(i+1);
        }
    }
    for (int i=0; i<n; i++) {
        if (b[i]=='1') {
            if ((i+1)%2==1) ob.pb(i+1);
            else eb.pb(i+1);
        }
    }
    if (oa.size()!=ob.size() || ea.size()!=eb.size()) {
        cout << -1 << endl;
        return;
    }
    ll ans=0;
    for (int i=0; i<oa.size(); i++) {
         ans+=abs(oa[i]-ob[i]);
    }
    for (int i=0; i<ea.size(); i++) {
         ans+=abs(ea[i]-eb[i]);
    }
    cout << ans/2<<endl;
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