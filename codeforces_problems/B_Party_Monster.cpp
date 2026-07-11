#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt1=0;
        ll cnt2=0;
        for (int i=0; i<n; i++) {
            if (s[i]=='(') cnt1++;
            else if (s[i]==')') cnt2++;
        }
        if (cnt1==cnt2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}