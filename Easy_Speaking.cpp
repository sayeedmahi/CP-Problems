#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0, maxcnt=0;
        for (int i=0; i<n; i++) {
            if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&& s[i]!='u') cnt++;
            else {
                maxcnt=max(maxcnt, cnt);
                cnt=0;
            }
        }
        maxcnt=max(maxcnt, cnt);
        if (maxcnt>=4) cout <<"Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}