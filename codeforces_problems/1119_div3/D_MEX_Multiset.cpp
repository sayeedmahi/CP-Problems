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
    int n; cin>>n;
    vi a(n);
    map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin>>a[i]; mp[a[i]]++;
    }
    int x=0,y=0,z=0;
    while (mp[z]>=3) z++;
    while (mp[y]>=2) y++;
    while (mp[x]>=1) x++;
    if (mp[0]==1) {
        no();
        return;
    }
    yes();
    int tx = min(x,y+z);
    string ans(n, ' ');
    map<int, bool> m1, m2, m3;
    for(int i=0; i<n; i++) {
        int v=a[i];
        if(v<tx && !m1[v]) {
            ans[i]='A';
            m1[v]=1;
        }
        else if(v<y && !m2[v]) {
            ans[i]='B';
            m2[v]=1;
        }
        else if(v<z && !m3[v]) {
            ans[i]='C';
            m3[v]=1;
        }
        else if(v==tx) ans[i]='C';
        else ans[i]='A';
    }
    cout<<ans<<endl;
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