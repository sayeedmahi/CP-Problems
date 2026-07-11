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
        int x, y;
        cin >> x>> y;
        int cnt=0;
        if (x%2!=0) cnt++;
        if (y%2!=0) cnt++;
        if (cnt==2) cout << 
        "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}