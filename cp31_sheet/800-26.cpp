#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int found =0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    found = 1;
                    break;
                }
            }
        }
        if (found) cout << "Yes\n";
        else cout << "No\n";
    }
}