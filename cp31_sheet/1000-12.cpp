#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        ll n, k, b, s;
        cin >>n>>k>>b>>s;
        if (k==1) {
            if (s!=b) cout << -1 << endl;
            else {
                for (ll i=0; i<n-1; i++) cout << 0 << " ";
                cout << s << endl;
            }
            continue;
        }
        ll a1=b*k;
        ll A1=(b+1)*k;
        if (s<a1) {
            cout << -1 <<endl;
            continue;
        }
        if (s>=a1 && s<A1) {
            a1=s;
        }
        else a1=A1-1;
        vector<ll>a;
        a.pb(a1);
        ll a2=s-a1;
        ll N1 = (a2+k-2)/(k-1);
        ll N2 = a2/(k-1);
        if (n<N1+(ll)a.size()) {
            cout << -1 << endl;
            continue;
        }
        if (N1>N2) {
            a.pb(a2-N2*(k-1));
        }
        while (N2--) {
            a.pb(k-1);
        }
        while ((ll)a.size()<n) {
            a.pb(0);
        }
        sort(all(a));
        for (ll x:a) cout<< x << " ";
        cout << endl;
    }
    return 0;
}