#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        ll t, h, u;
        cin >> t>> h>> u;
        ll ans=0;
        
        ll tu=min(t,u);
        ans+=tu*4;
        t-=tu, u-=tu;

        ll tht=min(t/2,h);
        ans+=tht*7;
        t-=tht*2, h-=tht;

        ll th=min(t,h);
        ans+=th*5;
        t-=th, h-=th;

        if (t>0) {
            ans+=2*t+1;
        }

        ans+=3*(u+h);

        cout << ans << endl;
    }
    return 0;
}