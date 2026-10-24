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
    ll sum=0;
    ll freq[1001]={0};
    for (int &x:a) {
        cin >>x;
        sum+=x;
        freq[x]++;
    }
    ll maxval=-1;
    ll maxfreq=0;
    for (int i=1; i<=1000; i++) {
        if (freq[i]>maxfreq) {
            maxfreq=freq[i];
            maxval=i;
        }
    }
    ll remfreq=n-maxfreq;
    ll loss=maxfreq-remfreq-2;
    if (loss<0) loss=0;
    cout << sum-(loss*maxval) << endl;
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