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
        int n, k, p;
        cin >> n >> k;
        int a[n+2];
        for (int i=1; i<=n; i++) {
            cin >> a[i];
        }
        cin >> p;
        a[0]=a[n+1]=a[p];
        int cntp1=0, cntp2=0;
        for (int i=0; i<p; i++) {
            if (a[i]!=a[i+1]) cntp1++;
        }
        for (int i=p; i<n+1; i++) {
            if (a[i]!=a[i+1]) cntp2++;
        }
        cout << max(cntp1, cntp2) << endl; 
    }
    return 0;
}