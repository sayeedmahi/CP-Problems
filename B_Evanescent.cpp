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
    string s;
    cin >>s;
    int target1=1;
    for (int i=1; i<n-1; i++) {
        if (s[i]!=s[i-1] && s[i]!=s[i+1] && s[i-1]==s[i+1]) {
            target1=i;
            break;
        }
    }
    if (target1==1) {
        for (int i=1; i<n-1; i++) {
            if (s[i]!=s[i+1] && s[i]!=s[i-1]) {
                target1=i;
                break;
            }
        }
    }
    string s2;
    for (int i=0; i<n; i++) {
        if (i==target1) continue;
        s2+=s[i];
    }    
    int ans=1;
    for (int i=1; i<s2.size(); i++) {
        if (s2[i]!=s2[i-1]) ans++;
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