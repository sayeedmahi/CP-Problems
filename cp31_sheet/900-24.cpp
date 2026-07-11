#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long abso = abs(a - b);
        if(abso == 0) {
            cout << 0 << " " << 0 << endl;
        } else {
            long long rem = b%abso;
            long long moves = min (rem, abso-rem);
            cout << abso << " " << moves << endl;
        }
    }
    return 0;
}