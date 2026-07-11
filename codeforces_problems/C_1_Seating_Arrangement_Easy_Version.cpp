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
        ll n, x, s;
        cin >> n>> x>> s;
        string S;
        cin >> S;
        int cntA=count(all(S), 'A');
        ll best=0;
        for (int m=0; m<=cntA; m++) {
            ll Tbl=0;
            ll ans=0;
            int rem=m;
            for (char c: S) {
                if (c=='I') {
                    if (Tbl<x) {
                        Tbl++;
                        ans++;
                    }
                }
                else if (c=='E') {
                    if (ans<Tbl*s) {
                        ans++;
                    }
                }
                else {
                    if (rem>0) {
                        rem--;
                        if (Tbl<x) {
                            Tbl++;
                            ans++;
                        }
                    }
                    else {
                        if (ans<Tbl*s) {
                            ans++;
                        }
                    }
                }
            }
            best=max(best,ans);
        }
        cout << best << endl;
    }
    return 0;
}