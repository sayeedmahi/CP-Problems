#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using vi=vector<int>;
using vl=vector<ll>;
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define pb push_back
#define ft first
#define sd second
#define bug(a) cout<<#a <<" : " << a<< endl;
#define bug2(a,b) cout << #a << " : " << a<<" "<<#b<<" : "<<b<<endl;

 bool isPrime(ll x) {
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (ll i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}

void solve() {
    string s;
    cin >>s; 
    int k;
    cin >>k;
    sort(all(s));
    set<ll>primes;
    do {
        ll x=stoll(s);
        if (isPrime(x)) {
            primes.insert(x);
        }
    } while (next_permutation(all(s)));
    vector<ll>v(all(primes));
    if (k>v.size()) cout << -1 << endl;
    else cout << v[k-1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--) {
        solve();
    }
}