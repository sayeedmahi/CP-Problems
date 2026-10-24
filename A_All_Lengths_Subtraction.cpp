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
    vector<int>a(n);
    vector<pair<int, int>>b;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        b.pb({a[i], i+1});
    }
    if (n==1 || n==2) {
        yes();
        return;
    }
    sort(rall(b));
    bool ans=true;
    if (abs(b[0].sd-b[1].sd)!=1) {
        no();
        return;
    }
    int mx=max(b[0].sd, b[1].sd);
    int mn=min(b[0].sd, b[1].sd);
    for (int i=2; i<b.size(); i++) {
        if (b[i].sd>mx) {
            if (abs(b[i].sd-mx)!=1) {
                ans=false;
                break;
            }
            mx=max(mx, b[i].sd);
        }
        else if (b[i].sd<mn) {
            if (abs(b[i].sd-mn)!=1) {
                ans=false;
                break;
            }
            mn=min(mn, b[i].sd);
        }      
    }
    if (ans) yes();
    else no();
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