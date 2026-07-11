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
        vector <int> a(7);
        for (int i=0; i<7; i++) {
            cin >> a[i];
        }
    sort(all(a));
    for (int i=0; i<6; i++) {
        a[i]=-a[i];
    }
    int sum=0;
    for (int i=0; i<7; i++) {
        sum+=a[i];
    }
    cout << sum << endl;
    }
    return 0;
}