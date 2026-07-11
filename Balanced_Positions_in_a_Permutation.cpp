#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        if (n==1) cout << 1 << endl;
        else {
            int ans=0;
            for (int i=0; i<n; i++) {
                int cntleft=0, cntright=0;
                for (int j=0; j<i; j++) {
                    if (a[j]<a[i]) cntleft++;
                }
                for (int k=i+1; k<n; k++) {
                    if (a[k]>a[i]) cntright++;
                }
                if (cntleft==cntright) ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}