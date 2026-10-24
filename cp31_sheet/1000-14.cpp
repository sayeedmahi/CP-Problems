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
    int n;
    cin >>n;
    vector<int>a(n);
    for (int &x:a) cin>>x;    
    vector<int>ans;
    int l = 0;
    for (int i=0; i<n; i++) {
        if (i==n-1 || a[i]!=a[i+1]) {
            int len=i-l+1;
            if (len==1) {
                cout << -1 <<endl;
                return;
            }
            ans.pb(i+1);
            for (int j=l; j<i; j++) {
                ans.pb(j+1);
            }
            l=i+1;
        }
    } 
    for (int x:ans) cout << x <<" ";
    cout << endl;
    return;
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