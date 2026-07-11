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
 
    int n, q;
    cin >> n>> q;
    vector<string>grid(n);
    for (int i=0; i<n; i++) {
        cin >> grid[i];
    }
    vector<vector<int>>pref(n+1, vector<int>(n+1, 0));
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            pref[i][j]= (grid[i-1][j-1]=='*') 
                        + pref[i-1][j] 
                        + pref[i][j-1] 
                        - pref[i-1][j-1];
        }
    }
    while (q--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << pref[r2][c2] 
                - pref[r1-1][c2]
                - pref[r2][c1-1]
                + pref[r1-1][c1-1] << endl;
    }
    return 0;
}