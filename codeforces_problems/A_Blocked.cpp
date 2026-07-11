#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(all(a), greater<int>());
        int ans=1;
        for (int i=0; i<n-1; i++) {
            if (a[i]==a[i+1]) {
                ans=-1;
                break;
            }
        }
        if (ans==-1) cout << -1 << endl;
        else {
            for (int i=0; i<n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        }
    }
    return 0;
}