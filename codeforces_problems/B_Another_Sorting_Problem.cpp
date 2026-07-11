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
        vector<int>a(n);
        for (auto &i:a) {
            cin >> i;
        }
        int k=0;
        for (int i=0; i<n-1; i++) {
            k=max(k, a[i]-a[i+1]);
        }
        for (int i=1; i<n; i++) {
            if (a[i]<a[i-1]) {
                a[i]+=k; 
            }
        }
        if (is_sorted(a.begin(), a.end())) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}