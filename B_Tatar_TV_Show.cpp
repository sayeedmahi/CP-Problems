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
        int n, k;
        cin >> n>> k;
        string s;
        cin >>s;
        for (int i=0; i<n-k; i++) {
            if (s[i]=='1' && s[i+k]=='0') {
                s[i]='0';
                s[i+k]='1';
            } 
            else if (s[i]=='1' && s[i+k]=='1') {
                s[i]='0';
                s[i+k]='0';
            }
        }
        int ok=1;
        for (int i=0; i<n; i++) {
            if (s[i]=='1') {
                ok=0;
                break;
            }
        }
        if (ok==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}