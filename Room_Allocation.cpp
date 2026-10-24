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
    int n; cin>>n;
    vector<tuple<int, int, int>>customers;
    for (int i=0; i<n; i++) {
        int a,b; cin>>a>>b;
        customers.pb({a, b, i});
    }
    sort(all(customers));
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int>ans(n); 
    int rooms=0;
    for (auto [arrv, depr, idx]: customers) {
        if (!pq.empty() && pq.top().first<arrv) {
            int room=pq.top().second;
            pq.pop();
            ans[idx]=room;
            pq.push({depr, room});
        }
        else {
            rooms++;
            ans[idx]=rooms;
            pq.push({depr, rooms});
        }
    }
    cout<<rooms<<endl;
    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }cout << endl;

}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}