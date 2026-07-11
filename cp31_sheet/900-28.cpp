#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long>a(n*k);
        for (auto &x: a) {
            cin >> x;
        }
        long long p = n*k;
        long long ans=0;
        while (k--) {
            p=p-(n/2 + 1);
            ans+=a[p];
        }
        cout << ans << endl;
    }
    return 0;
}