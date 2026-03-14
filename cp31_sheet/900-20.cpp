#include<bits/stdc++.h>
using namespace std;

int main () {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int len = s.size();
        if (s[0]!=s[len-1]) {
            s[0]=s[len-1];
        }
        cout << s << endl;
    }
    return 0;
}
