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
        vector<int>a(n);
        for (int &x:a) {
            cin >>x;
        }
        vector<int>prevdiff(n, -1);
        int prev=-1;
        for (int i=1; i<n; i++) {
            if (a[i]!=a[i-1]) {
                prev=i-1;
            }
            prevdiff[i]=prev;
        }
        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l>> r;
            if (prevdiff[r-1]>=l-1) {
                cout << prevdiff[r-1]+1 << " " << r << endl;
            }
            else cout << -1 << " " << -1<< endl;
        }
        cout << endl;
    }
    return 0;
}