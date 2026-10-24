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
    for (int &x:a) cin>>x;
    int tblocks=1;
    vi blocks;
    blocks.pb(a[0]);
    vi blens;
    int tmp=1;
    for (int i=1; i<n; i++) {
        if (a[i]!=a[i-1]) {
            tblocks++;
            blens.pb(tmp);
            blocks.pb(a[i]);
            tmp=1;
        }
        else {
            tmp++;
        }
    }
    blens.pb(tmp);
    int best=0;
    for (int i=0; i<tblocks-1; i++) {
        int clen=blens[i];
        int nlen=blens[i+1];
        int cval=blocks[i];
        int nval=blocks[i+1];
        int extra=0;
        if (clen>=2 && nlen>=2) extra=2;
        else if (clen>=2 && nlen==1) {
            if (i+2>=tblocks || blocks[i+2]!=cval) extra=1;
        }
        else if (clen==1 && nlen>=2) {
            if (i-1<0 || blocks[i-1]!=nval) extra=1;
        }
        best=max(best, extra);
    }
    cout << tblocks+best << endl;
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