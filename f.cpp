#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
ll fact (int x) {
    ll res=1;
    for (int i=2; i<=x; i++) {
        res*=i;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        map<int, int>mp;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        ll total=0;
        for (auto i: mp) {
            if (i.second>=3) {
                total+=i.second*(i.second-1)*(i.second-2)/6LL;
            }
        }
        cout << total << endl;
    }

    return 0;
}