#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        int cnt1= count(s.begin(), s.end(), '1');
        int cnt0=s.size()-cnt1;
        int i=0;
        for (; i<s.size(); i++) {
            if (s[i]=='0') {
                if (cnt1==0) break;
                cnt1--;
            }
            else {
                if (cnt0==0) break;
                cnt0--;
            }
        }
        cout << s.size()-i << endl;
        
    }
}