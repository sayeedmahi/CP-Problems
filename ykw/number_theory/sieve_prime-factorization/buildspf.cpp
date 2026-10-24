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

vector<int>buildSPF (int n) {
    vector<int>spf(n+1);
    iota(spf.begin(), spf.end(), 0); //mark all spf[x]=x initially 
    spf[0]=0;
    if(n>=1) spf[1]=1;
    for (int p=2; 1LL*p*p<=n; p++) {
        if (spf[p]==p) { //is prime
            for (long long j=1LL*p*p; j<=n; j+=p) {
                if (spf[(int)j]==j) { //marking by prime for the first time now
                    spf[(int)j]=p;
                }
            }
        }
    }
    return spf;
}

void solve() {
    int n=20;
    vector<int>spf=buildSPF(n);
    for (int x=2; x<=n; x++) {
        cout << spf[x] << " ";
    }cout << endl;
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