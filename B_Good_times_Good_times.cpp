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
        ll x;
        cin >>x;
        int digit=-1;
        while (x>0) {
            digit++;
            x/=10;
        }
        cout <<"1";
        while (digit--) cout <<"0";
        cout <<"1"<< endl;
    }
    return 0;
}