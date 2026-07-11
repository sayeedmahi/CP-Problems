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
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int ans=0;
        for (int i=0; i<n; i++) {
            if (a[i]==100) {
                ans=1;
                break;
            }
        }
        if (ans==1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}