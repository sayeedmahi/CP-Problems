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
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1'000'000'007;
// constexpr int MOD = 998'244'353;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

template <typename T>
void read(vector<T>& v) {
    for (auto& x : v)
        cin >> x;
}

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n, k;
    cin  >>n>>k;
    string s;
    cin >>s;
    int ans=0;
    int l=0, r=0, midl=0, midr=0;
    for (int i=0; i<n; i++) {
        if (i+1<=k && s[i]=='L') {
            ans++;
            r++;
        }
        else if (i+1<=k && s[i]=='R') {
            r++;
        }
    }
    for (int i=n-1; i>=0; i--) {
        if (i+1>n-k && s[i]=='R') {
            ans++;
            l++;
        }
        else if (i+1>n-k && s[i]=='L') {
            l++;
        }

    }
    if (r+l>n) cout <<-1 <<endl;
    else cout << ans <<endl;

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