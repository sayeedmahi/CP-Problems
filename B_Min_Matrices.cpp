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
    int n,k;cin>>n>>k;
    if (k<n || k>2*n-1) {
        cout<<-1<<endl; return;
    }
    int d=2*n-k;
    vector<vector<int>>mat(n+1, vi(n+1, 0));
    for (int i=0; i<d; i++) {
        mat[i][i]=i+1;
    }
    int val=d+1;
    for (int i=d; i<n; i++) {
        mat[i][d-1]=val++;
    }
    for (int j=d; j<n; j++) {
        mat[d-1][j]=val++;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (mat[i][j]==0) {
                mat[i][j]=val++;
            }
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << mat[i][j] << " ";
        }cout << endl; 
    }
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