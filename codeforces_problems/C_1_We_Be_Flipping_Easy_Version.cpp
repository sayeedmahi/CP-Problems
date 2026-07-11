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
        ll n;
        cin >> n;
        vector<ll>a(n);
        for (auto &i:a) {
            cin >> i;
        }
        vector<ll>b;
        int cnt=0;
        for(int i=n-1; i>=0; i--) {
            if(cnt%2) {
                a[i]=-a[i];
            }
            if(a[i]>0) {
                cnt++;
                b.pb(i+1);
            }
        }
        cout << cnt << endl;
        for(int i : b) {
            cout << i << " ";
        }
        cout << endl;
        // ll op=0;
        // vector<ll>b;
        // ll ckpos=0;
        // ll ckneg=0;
        // ll cknegend=0;
        // for (ll i=n-1; i>0; i--) {
        //     if (i==n-1 && a[i]<0) cknegend=1;
        //     if (a[i]<0 && a[i-1]>0) {
        //         if (cknegend==1) continue;
        //         if (ckneg==1) continue;
        //         op++;
        //         b.pb(i+1);
        //         ckneg=0;
        //         ckpos=0;
        //     }
        //     else if (a[i]<0 && a[i-1]<0) {
        //         if (cknegend==1) continue;
        //         if (ckneg==1) continue;
        //         op++;
        //         b.pb(i+1);
        //         ckneg=1;
        //         ckpos=0;
        //     }
        //     else if (a[i]>0 && a[i-1]<0) {
        //         cknegend=0;
        //         if (ckpos==1) continue;
        //         op++;
        //         b.pb(i+1);
        //         ckpos=0;
        //         ckneg=0;
        //     }
        //     else if (a[i]>0 && a[i-1]>0) {
        //         cknegend=0;
        //         if (ckpos==1) continue;
        //         op++;
        //         b.pb(i+1);
        //         ckpos=1;
        //         ckneg=0;
        //     }
        // }
        // if ((a[0]<0 && a[1]>0) || (a[0]>0 && a[1]<0)) {
        //     op++;
        //     b.pb(1);
        // }
        // cout << op << endl;
        // for (auto i:b) {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
    return 0;
}