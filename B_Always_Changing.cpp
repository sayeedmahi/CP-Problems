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
    string s;
    cin >>n>>s;
    vector<int>lengths;
    vector<char>blocks;
    for (int i=0; i<n; i++) {
        if (i==0 || s[i]!=s[i-1]) {
            blocks.pb(s[i]);
            lengths.pb(1);
        }
        else lengths.back()++;
    }
    int tblocks=blocks.size();
    int zeros=0, ones=0;
    for (int i=0; i<tblocks; i++) {
        if (blocks[i]=='0') zeros+=lengths[i]-1;
        else ones+=lengths[i]-1;
    }
    if (abs(ones-zeros)<=1) {
        cout << ones+zeros << endl;
        return;
    }
    int needed=abs(ones-zeros)-1;
    char need;
    if (ones>zeros) need='0';
    else need='1';
    int extra=0;
    if (blocks[0]==need) extra++;
    if (tblocks>1 && blocks[tblocks-1]==need) extra++;
    if (needed<=extra) cout << ones+zeros+needed<< endl;
    else cout << -1 << endl;
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