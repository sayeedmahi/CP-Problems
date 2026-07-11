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
        ll n, m, k;
        cin >> n >> m>> k;
        vector<ll>a(n);
        for (auto &i: a) {
            cin >> i;
        }
        sort(a.rbegin(), a.rend());
        ll pots=0, totalpots=0;
        for (auto i: a) {
            if (a[i]>k) {
                ll b = a[i]/k;
                if ((b*k + (b-1))<=n) {
                    
                }
            }
        }
    }

    return 0;
}