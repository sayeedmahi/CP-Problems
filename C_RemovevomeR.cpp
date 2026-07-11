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
        string s;
        cin >> s;
        int cnt=0;
        for (int i=0; i<n-1; i++) {
            if (s[i]!=s[i+1]) cnt++;
        }
        if (cnt==1) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}