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
        ll a, b, x;
        cin >> a>> b>>x;
        if (a==b) cout << 0 <<endl;
        else if (abs(a-b)==1) cout << 1 << endl;
        else if (x>a && x>b) cout <<2 << endl;
        else {
            int op=0;
            while (a!=b) {
                int mx=max(a,b);
                int mn=min(a,b);
                if (abs((mx/x)-mn)<(mx-mn)) {
                    if (mx==a) a=a/x;
                    else b=b/x;
                    op++;
                }
                else {
                    if (mn==b) b+=mx-mn;
                    else a+=mx-mn;
                    op+=mx-mn;
                }
            }
            cout << op << endl;
        }
    }   
    return 0;
}