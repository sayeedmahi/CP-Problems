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
       int maximum = *max_element(a.begin(), a.end());
       cout << maximum * n << endl;
    }

    return 0;
}