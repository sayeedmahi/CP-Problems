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
        string s;
        cin >> s;
        int notAlt=0;
        for (int i=0; i<s.size()-1; i++) {
            if (s[i]==s[i+1]) notAlt++; 
        }
        if (notAlt>2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}