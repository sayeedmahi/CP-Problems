#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int count0=0, count1=0;
        for (char c: s) {
            if (c=='0') count0++;
            else count1++;
        } 
        int mini=min(count0,count1);
        if (mini%2==0) cout << "NET" << endl;
        else cout << "DA" << endl;
    }
    return 0;
}