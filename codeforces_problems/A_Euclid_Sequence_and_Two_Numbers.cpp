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
        vector<int>b(n);
        for (int &x:b) {
            cin >>x;
        }
        sort(all(b), greater<int>());
        bool ans=true;
        for (int i=0; i<n-2; i++) {
            if (b[i+2]!=b[i]%b[i+1]) {
                ans=false;
                break;
            }
        }
        if (ans) {
            cout << b[0] << " " << b[1] << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}