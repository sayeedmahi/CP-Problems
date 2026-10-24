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

// int query(int u, int v, int d) {
//     cout << "? " << u << " " << v << " " << d <<endl;
//     int response;
//     cin>> response;
//     return response;
// }
 
// pair<int, int> farthestNode(int start, int n, int d) {
//     int farthest=1;
//     for (int v=1; v<=n; v++) {
//         if (v==start) continue;
//         while (query(start, v, d+1)==1) {
//             d++;
//             farthest=v;
//         }
        
//     }
//     return {farthest, d};
// }

// void solve() {
//     int n;
//     cin >> n;
//     auto[endpoint1,d1]=farthestNode(1, n, 0);
//     auto[endpoint2,diameter]=farthestNode(endpoint1, n, d1);
//     cout << "! " << endpoint1 << " " << endpoint2 << " " << diameter << endl;    
// }

int query(int u, int v, int d) {
    cout << "? " << u << " " <<  v << " " << d << endl;
    int res;
    cin >> res;
    return res;
}

void solve() {
    int n;
    cin >> n;
    int u=1;
    int d1=0; 
    for (int i=2; i<=n; i++) {
        while (query(1, i, d1+1)) {
            d1++;
            u=i;
        }
    }
    int v=1;
    int maxd=d1;
    for (int i=1; i<=n; i++) {
        if (i==1 || i==u) continue;
        while (query(u, i, maxd+1)) {
            maxd++;
            v=i;
        }
    }
    cout << "! " << u << " " << v << " " << maxd << endl;
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