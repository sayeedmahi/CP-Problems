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
        bool pos=true;
        for (int i=n-1; i>=0; i--) {
            if (a[i]>i+1) {
                pos=false;
                break;
            }
        }
        if (pos) cout <<"YES" << endl;
        else cout << "NO"<< endl;
    }
    return 0;
}