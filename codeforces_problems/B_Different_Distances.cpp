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
        for (int i=1; i<=n; i++) {
            cout << i << " ";
        }
        for (int i=1; i<=n; i++) {
            cout << i << " " << i << " ";
        }
        if (n==2) cout << 1<< " " << 2 << endl;
        else {
            if (n%2==0) {
                for (int i=1; i<=n; i++) {
                    cout << i << " ";
                }
                cout << endl;
            }
            else {
                int mid = (n+1)/2;
                for (int i=1; i<mid; i++) {
                    cout << i << " ";
                }
                cout << mid+1 << " " << mid << " ";
                for (int i=mid+2; i<=n; i++) {
                    cout << i<< " ";
                } 
                cout << endl;
            }
        }
    }
    return 0;
}