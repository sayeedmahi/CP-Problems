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
        vector<int>a(n), b(n), c(n);
        for (int &x:a) {
            cin >>x;
        }
        for (int &x:b) {
            cin >>x;
        }
        for (int &x:c) {
            cin >>x;
        }
        vector<pair<int, int>>A, B, C;
        for (int i=0; i<n; i++) {
            A.pb({a[i], i});
        }
        for (int i=0; i<n; i++) {
            B.pb({b[i], i});
        }
        for (int i=0; i<n; i++) {
            C.pb({c[i], i});
        }
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());
        int ans=0;
        for (int i=0; i<3; i++) {
            for (int  j=0; j<3; j++) {
                for (int k=0; k<3; k++) {
                    int x=A[i].second;
                    int y=B[j].second;
                    int z=C[k].second;
                    if (x!=y && y!=z && z!=x) {
                        ans=max(ans, A[i].first+ B[j].first+ C[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}  