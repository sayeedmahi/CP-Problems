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
const int MAX = 1000000;
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
vector<int>dp(MAX+1);
int main() {
    fastIO();

    int T;
    cin >> T;
    // cin >> T;
    dp[0]=0, dp[1]=0, dp[2]=0;
    for (int i=3; i<=MAX; i++) {
        if (i%2!=0) {
            int a=i/2;
            int b=i-a;
            dp[i]=dp[a]+dp[b]+1;
        }
        else {
            int a=i/2 - 1;
            int b=i-a;
            dp[i]=dp[a]+dp[b]+1;
        }
    }
    for (int tc=1; tc<=T; tc++) {
        int n; cin>>n;
        int ans=0;
        vi a(n); for (int i=0; i<n; i++) {
            cin>>a[i];
            ans+=dp[a[i]];
        }
        // cout <<  ans << endl;
        if (ans%2==0) {
            cout << "Case " << tc << ": Bob" << endl;
        }
        else cout << "Case " << tc<< ": Alice" << endl;
    }
        

    return 0;
}