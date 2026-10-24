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

vector<bool>segmentedSieve(long long L, long long R) {
    long long lim=sqrt((long double)R); 
    while ((lim+1)*(lim+1)<=R) lim++;
    while (lim*lim>R) lim--;
    vector<bool>small(lim+1, true);
    small[0]=false;
    if (lim>=1) small[1]=false;
    vector<long long>primes;
    for (long long i=2; i<=lim; i++) {
        if (small[i]) {
            primes.pb(i);
            if (i*i<=lim) {
                for (long long j=i*i; j<=lim; j+=i) {
                    small[j]=false;
                }
            }
        }
    }
    vector<bool>isPrime(R-L+1, true);
    for (long long p: primes) {
        long long start=((L+p-1)/p)*p;
        start=max(start, p*p);
        for (long long j=start; j<=R; j+=p) {
            isPrime[j-L]=false;
        }
    }
    for (long long j=L; j<=R && j<=1; j++) {
        isPrime[j-L]=false;
    }
    return isPrime;
}

void solve() {
    long long L=20, R=40;
    vector<bool>isPrime=segmentedSieve(L,R);
    for (long long x=L; x<=R; x++) {
        if (isPrime[x-L]) {
            cout << x  << " ";
        }
    } cout << endl;
}

int main() {
    fastIO();

    int T = 1;
    // cin >> T;

    while (T--)
        solve();

    return 0;
}