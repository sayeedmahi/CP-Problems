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
// constexpr int MOD = 998'244'353;

void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
const int MOD=1e9+7;
const int MAX=100000;
vector<ll>dp(MAX+1);
vector<ll>pref(MAX+1);
int main() {
    fastIO();
    int T, k;
    cin >> T>>k;
    // cin >> T;
    dp[0]=1;
    for (int i=1; i<=MAX; i++) {
        dp[i]=dp[i-1];
        if (i>=k) {
            dp[i]=(dp[i]+dp[i-k])%MOD;
        }
    }
    for (int i=1; i<=MAX; i++) {
        pref[i]=(pref[i-1]+dp[i])%MOD;
    }

    while (T--) {
        int a, b;
        cin>> a>>b;
        cout << (pref[b]-pref[a-1]+MOD)%MOD << endl;
    }

    return 0;
}