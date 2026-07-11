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
        string s;
        cin >> s;
        int ln = s.length();
        int ans=1;
        for (int i=0; i<ln; i++) {
            if (s[i]=='?') {
                if (s[ln-i-1]=='?') {
                    ans=0;
                    break;
                }
            }
        }
        if (ans==1) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}