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
        for (int i=0; i<n-1; i++) {
            if (abs(a[i]-a[i+1])==__gcd(a[i], a[i+1])) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}