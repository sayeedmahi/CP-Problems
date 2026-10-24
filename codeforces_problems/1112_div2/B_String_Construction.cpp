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
    int n, k;
    cin >> n>> k;
    int blocks=n-k;
    if (k==n-1) {
        cout << -1 << endl;
        return;
    }
    int ones=(n+1)/2;
    int zeros=n/2;
    for (int i=1; i<=blocks; i++) {
        if (i%2!=0) {
            if (i+2>blocks) {
                while (ones--) {
                    cout <<'1';

                }
            } 
            else {
                cout << '1';
                ones--;
            }
        }
        else {
            if (i+2>blocks) {
                while (zeros--) {
                    cout <<'0';
                }
            }
            else {
                cout << '0';
                zeros--;
            }
        }
    }
    cout << endl;
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