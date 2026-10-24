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
    // ll n, t; cin>>n>>t; 
    // vll a(n+1), pref(n+1, 0);
    // for (int i=1; i<=n; i++) {
    //     cin>>a[i];
    //     pref[i]=pref[i-1]+a[i];
    // }
    // ll ans=0;
    // for (int i=1; i<=n; i++) {
    //     ll l=0, r=n-i+1;
    //     while (r>=l) {
    //         ll mid=l+(r-l)/2;
    //         ll time=pref[i+mid-1]-pref[i-1];
    //         if (time<=t) {
    //             l=mid+1;
    //             ans=max(ans, mid);
    //         }
    //         else r=mid-1;
    //     }
    // }cout << ans << endl;
    ll n, t; cin>>n>>t; 
    vll a(n); for (ll &x:a) cin>>x;
    ll l=0, sum=0, ans=0;
    for (ll r=0; r<n; r++) {
        sum+=a[r];
        while (sum>t) {
            sum-=a[l];
            l++;
        }
        ans=max(ans, r-l+1);
    }cout << ans << endl;
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}