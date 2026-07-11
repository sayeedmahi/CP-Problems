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
        int n;
        cin >> n;
        ll ans=0;
        ll secondmin=10e9;
        ll firstmin=10e9;
        while (n--) {
            int m;
            cin >> m;
            vector<ll>a(m);
            for (ll &x:a) {
                cin >>x;
            }
            sort(all(a));
            secondmin=min(secondmin, a[1]);
            firstmin=min(firstmin, a[0]);
            ans+=a[1];
        }
        ans-=secondmin;
        ans+=firstmin;
        cout << ans<< endl;
    }
    return 0;
}