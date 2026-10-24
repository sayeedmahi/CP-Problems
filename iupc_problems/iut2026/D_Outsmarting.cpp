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
    vi a(2);
    for (char c:s) {
        if (c=='H') a[0]++;
        else a[1]++;
    }
    bool bob=false;
    if ((s=="HT")|| (s=="TH") || (a[0]==n) || (a[1]==n)) {
        bob=true;
    }
    if (!bob && n>=2) {
        for (int i=1; i<n-1; i++) {
            if (s[i]==s[i-1]) bob=true;
            else {
                bob=false;
                break;
            }
        }
    }
    if (bob) cout << "Bob\n";
    else cout <<"Alice\n";
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