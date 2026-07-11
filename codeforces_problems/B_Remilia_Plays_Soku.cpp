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
        ll n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        if (n<=3) cout << 1 << endl;
        else {
            cout << min(abs(x1-x2), n-abs(x1-x2)) + k << endl;
        }
    }

    return 0;
}