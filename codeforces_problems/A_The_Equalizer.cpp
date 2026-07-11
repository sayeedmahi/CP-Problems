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
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum=0;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        if (sum%2!=0) cout << "YES" << endl;
        else {
            if ((k*n)%2==0) cout << "YES" << endl;
            else cout <<"NO" << endl; 
        }
    }
    return 0;
}