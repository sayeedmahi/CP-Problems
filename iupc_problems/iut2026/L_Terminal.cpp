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
    cin >>n;
    vi a(n);
    for (int &x:a) cin >>x;
    int target=a[n-1]%2;
    int c=0;
    bool diffpar=false;
    for (int x:a) {
        if (x%2==target) c++;
        else diffpar=true;
    }
    int r=1;
    for (int i=n-1; i>=0; i--) {
        if ((a[i]%2)!=(a[i-1]%2)) break;
        if ((a[i]%2)==(a[i-1]%2)) r++;
    }
    if (r==n-1) {
        if (a[0]%2==target) r=n;
    }
    if (!diffpar) cout << 1 << endl;
    else cout << c-r+1 << endl;
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