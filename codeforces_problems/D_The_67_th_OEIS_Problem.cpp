#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    const int MAXN=200000;
    vector<bool>is_prime(MAXN, true);
    vector <int>primes;
    is_prime[0]=is_prime[1]=false;
    for (int i=2; i<MAXN; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j=1LL*i*i; j<MAXN; j=j+i) {
                is_prime[j]=false;
            }
        }
    }
    while (t--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) {
            cout << 1LL*primes[i]*primes[i+1] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector <ll>b(n+1);
        for (ll i=0; i<n+1; i++) {
            b[i]=2LL*i +1;
        }
        for (ll i=0; i<n; i++) {
            cout <<1LL* b[i]*b[i+1] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/