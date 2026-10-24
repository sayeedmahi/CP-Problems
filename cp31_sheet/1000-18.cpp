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
    ll w, h; cin>>w>>h;
    ll k1; cin >> k1; vll h1(k1);
    for (int i=0; i<k1; i++) {
        cin >> h1[i];
    }ll ans1=(h1[k1-1] - h1[0])*h;
    ll k2; cin >> k2; vll h2(k2);
    for (int i=0; i<k2; i++) {
        cin >> h2[i];
    }ll ans2=(h2[k2-1] - h2[0])*h;
    ll k3; cin >> k3; vll v1(k3);
    for (int i=0; i<k3; i++) {
        cin >> v1[i];
    }ll ans3=(v1[k3-1] - v1[0])*w;
    ll k4; cin >> k4; vll v2(k4);
    for (int i=0; i<k4; i++) {
        cin >> v2[i];
    }ll ans4=(v2[k4-1] - v2[0])*w;
    cout << max(max(ans1, ans2), max(ans3, ans4)) << endl;
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