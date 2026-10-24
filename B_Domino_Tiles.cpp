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
    string s;
    cin >>s;
    bool ok=true;
    char evenpos=-1;
    char oddpos=-1;
    for (int i=0; i<s.size(); i=i+2) {
        if (s[i]!='?') {
            oddpos=s[i];
            break;
        }
    }
    for (int i=1; i<s.size(); i=i+2) {
        if (s[i]!='?') {
            evenpos=s[i];
            break;
        }
    }
    char Oddpos=s[0];
    char Evenpos=s[1];
    for (int i=2; i<s.size(); i=i+2) {
        if (s[i]!='?' && s[i]==Oddpos) {
            cout << 0 << endl;
            return;
        }
        if (s[i]=='?' && Oddpos=='1') {
            Oddpos='0';
        }
        else if (s[i]=='?' && Oddpos=='0') {
            Oddpos='1';
        }
        else Oddpos=s[i];
    } 
    for (int i=3; i<s.size(); i=i+2) {
        if (s[i]!='?' && s[i]==Evenpos) {
            cout << 0 << endl;
            return;
        }
        if (s[i]=='?' && Evenpos=='1') {
            Evenpos='0';
        }
        else if (s[i]=='?' && Evenpos=='0') {
            Evenpos='1';
        }
        else Evenpos=s[i];
    } 
    if (oddpos==-1 && evenpos==-1) {
        cout << 4 << endl;
    }
    else if (oddpos==-1||evenpos==-1) {
        cout << 2 << endl;
    }
    else cout << 1<<endl;
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