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
        cin >>n;
        vector<int>a(n);
        for (int &x:a) cin >>x;
        int cnt1=0, cnt23=0, idx1=-1;
        for (int i=0; i<n-1; i++) {
            if (a[i]==1) cnt1++;
            else cnt23++;
            if (cnt1>=cnt23) {
                idx1=i;
                break;
            }
        }
        if (idx1==-1) {
            cout <<"NO" << endl;
            continue;
        }
        if (cnt1>cnt23 && idx1+2<n && a[idx1+1]==3) {
            idx1++;
        }
        int cnt12=0, cnt3=0, ok=0;
        for (int i=idx1+1; i<n-1; i++) {
            if (a[i]==3) cnt3++;
            else cnt12++;
            if (cnt12>=cnt3) {
                ok=1;
                break;
            }
        }
        if (ok) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}