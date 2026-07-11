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
        cin >>s;
        int op2=0, op3=0, ans=0;
        for (int i=0; i<n-2; i++) {
            if (op2==-1) {
                op3=-1;
                op2=0;
                continue; 
            }
            else if (op3==-1) {
                op3=0;
                continue;
            }
            else if ((s[i]==s[i+1]) && s[i+1]==s[i+2]) {
                op2=-1;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}